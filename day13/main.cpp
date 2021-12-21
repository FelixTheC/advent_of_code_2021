//
// Created by felix on 20.12.21.
//
#include <iostream>
#include <vector>
#include <iterator>
#include "input_data.hpp"
#include "test_input.hpp"

using paperVec = std::vector<std::vector<u_char>>;

paperVec init_paper(const int &y, const int &x)
{
    paperVec newGrid;
    for(int i = 0; i <= y; ++i)
    {
        std::vector<u_char> tmp;
        tmp.reserve(x);
        for(int j = 0; j <= x; ++j)
        {
            tmp.emplace_back('.');
        }
        newGrid.emplace_back(tmp);
    }

    return newGrid;
}

void display(const paperVec &paper)
{
    for (auto &line : paper)
    {
        std::copy(line.begin(), line.end(), std::ostream_iterator<char>(std::cout, ""));
        std::cout << std::endl;
    }
}

paperVec foldAxisY(const paperVec &paper, const int &yBorder, const int &y_total)
{
    paperVec foldedPaper = init_paper(yBorder - 1, paper[0].size() - 1);
    size_t x_size = paper[0].size();

    for(int idx = 0; idx < yBorder; ++idx)
    {
        for(int x = 0; x < x_size; ++x)
        {
            foldedPaper[idx][x] = paper[idx][x];
        }

        int connection = yBorder - (y_total - yBorder);
        for(int yidx = y_total; yidx > yBorder ; --yidx, ++connection)
        {
            for(int x = 0; x < x_size; ++x)
            {
                if(paper[yidx][x] != '.')
                    foldedPaper[connection][x] = paper[yidx][x];
            }
        }
    }

    return foldedPaper;
}

paperVec foldAxisX(const paperVec &paper, const int &xBorder, const int &x_total)
{
    paperVec foldedPaper = init_paper(paper.size() - 1, xBorder - 1);

    for (int y = 0; y < paper.size(); ++y)
    {
        // from the left to folding line
        for(int idx = 0; idx < xBorder; ++idx)
        {
            foldedPaper[y][idx] = paper[y][idx];
        }

        int connection = xBorder - (x_total - xBorder); // where the right side of the paper meets the left side after folding
        // from folding line to the right
        for(int idx = x_total; idx > xBorder ; --idx, ++connection)
        {
            if(paper[y][idx] != '.')
                foldedPaper[y][connection] = paper[y][idx];
        }
    }
    return foldedPaper;
}

unsigned int visibileDots(paperVec &paper)
{
    int sum = 0;
    for(auto &y_row: paper)
    {
        std::for_each(y_row.begin(), y_row.end(), [&sum](auto &val){if(val == '#') ++sum;});
    }

    return sum;
}

int main()
{
    bool debug = false;
    paperVec paper;
    paperVec foldedX;
    paperVec foldedY;

    if(debug)
    {
        paper = init_paper(14, 10);
        for (auto & val: test::points)
        {
            auto x = val[0];
            auto y = val[1];
            paper[y][x] = '#';
        }
    }
    else
    {
        paper = init_paper(1136, 890);

        for (auto & val: validation::points)
        {
            auto x = val[0];
            auto y = val[1];
            paper[y][x] = '#';
        }
    }


    if (debug)
    {
        foldedY = foldAxisY(paper, test::fold_y, paper.size() - 1);
        foldedX = foldAxisX(foldedY, test::fold_x, paper[0].size() - 1);
    }
    else
        foldedX = foldAxisX(paper, 655, paper[0].size() - 1);

    std::cout << visibileDots(foldedX) << std::endl;

    exit(EXIT_SUCCESS);
}
