//
// Created by felix on 05.12.21.
//

#include <cmath>
#include <iostream>
#include <valarray>
#include "Diagram.hpp"

Diagram::Diagram(const int &columns, const int &rows)
{
    for(int row = 0; row <= rows; ++row)
    {
        std::vector<Point> points;
        points.reserve(columns);

        for(int column = 0; column <= columns; ++column)
        {
            points.emplace_back(Point(row, column));
        }

        _board.emplace_back(points);
    }
}

void Diagram::display()
{
    std::for_each(_board.begin(), _board.end(),
                  [](std::vector<Point> &row){
        std::for_each(row.begin(), row.end(), [](Point &point){
            int visits = point.get_visitations();
            if (visits > 0)
                std::cout << visits << " ";
            else
                std::cout << "." << " ";
        });
        std::cout << "\n";
    });
}

void Diagram::add_entries(const std::vector<int> vents)
{
    int x1, y1, x2, y2;
    y1 = vents[0];
    x1 = vents[1];

    y2 = vents[2];
    x2 = vents[3];

    double angle = atan2(y2 - y1, x2 - x1);
    int degree = static_cast<int>(angle * 180 / M_PI);

    if (degree == 45)
    {
        int y1_t = y1, x1_t = x1;
        while (x1_t <= x2)
        {
            _board[x1_t][y1_t].visit(x1_t, y1_t);
            ++x1_t;
            ++y1_t;
        }
    }

    if (degree == -45)
    {
        int y1_t = y1, x1_t = x1;
        while (x1_t <= x2)
        {
            _board[x1_t][y1_t].visit(x1_t, y1_t);
            ++x1_t;
            --y1_t;
        }
    }

    // moving vertical
    if ((y1 != y2) && (x1 == x2))
    {
        if (y1 < y2)
        {
            for (int y_row = y1; y_row <= y2; ++y_row)
            {
                _board[x1][y_row].visit(x1, y_row);
            }
        }
        else
        {
            for (int y_row = y2; y_row <= y1; ++y_row)
            {
                _board[x1][y_row].visit(x1, y_row);
            }
        }

    }
    // moving horizontal
    if ((y1 == y2) && (x1 != x2))
    {
        if(x1 < x2)
        {
            for (int x_row = x1; x_row <= x2; ++x_row)
            {
                _board[x_row][y1].visit(x_row, y1);
            }
        }
        else
        {
            for (int x_row = x2; x_row <= x1; ++x_row)
            {
                _board[x_row][y1].visit(x_row, y1);
            }
        }
    }
}

int Diagram::points_with_min_x_visits(const int min)
{
    int total = 0;
    std::for_each(_board.begin(), _board.end(), [&total, &min](std::vector<Point> &row){
        std::for_each(row.begin(), row.end(), [&total, &min](Point &point){
           if(point.get_visitations() >= min)
                ++total;
        });
    });

    return total;
}
