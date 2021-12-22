//
// Created by felix on 20.12.21.
//
#include <iostream>
#include <vector>
#include <filesystem>
#include <fstream>
#include <numeric>
#include "Point.hpp"


int main()
{
    std::vector<Point> points;

    auto base_dir = std::filesystem::path(std::filesystem::current_path()).parent_path();
    const std::string input_path = base_dir.append("input.txt");

    std::fstream inputfile;
    inputfile.open(input_path, std::ios::in);
    if (inputfile.is_open())
    {
        std::string line;
        int x, y;
        while (getline(inputfile, line))
        {
            if ((line.find('x') < line.size()) || (line.find('y') < line.size()))
            {
                std::string axis;
                int border_line;
                axis = line.substr(0, line.find('='));
                border_line = std::stoi(line.substr(line.find('=') + 1, line.size() - 1));

                if (axis == "x")
                    std::for_each(points.begin(), points.end(),
                                  [&border_line](Point &point)
                                  { if (!point.isSymbol('|')) point.foldX(border_line); }
                    );
                if (axis == "y")
                    std::for_each(points.begin(), points.end(),
                                  [&border_line](Point &point)
                                  { if (!point.isSymbol('|')) point.foldY(border_line); }
                    );
            }
            if (line.find(',') < line.size())
            {
                x = std::stoi(line.substr(0, line.find(',')));
                y = std::stoi(line.substr(line.find(',') + 1, line.size() - 1));
                points.emplace_back(Point(x, y, '#'));
            }
        }
    }
    inputfile.close();

    std::sort(points.begin(), points.end(), std::less<Point>());
    auto last = std::unique(points.begin(), points.end());
    points.erase(last, points.end());

    int total = 0;
    std::for_each(points.begin(), points.end(), [&total](const Point &point)
    {
        total += point.isSymbol('#');
    });
    std::cout << total << std::endl;

    std::vector<std::vector<char>> values;
    for (int i = 0; i < 7; ++i)
    {
        std::vector<char> tmp;
        for (int j = 0; j < 41; ++j)
            tmp.emplace_back('.');
        values.emplace_back(tmp);
    }

    for (auto const &val: points)
    {
        values[val.getY()][val.getX()] = val.getSymbol();
    }

    for (const auto &line: values)
    {
        for (const auto &row: line)
            std::cout << row << " ";
        std::cout << std::endl;
    }

    exit(EXIT_SUCCESS);
}
