//
// Created by felix on 14.12.21.
//
#include <iostream>
#include <vector>
#include <iterator>

#include "data_part_1.hpp"
#include "data_testing.hpp"
#include "Point.hpp"

namespace AOC
{
    void puzzle_1(const bool testing=true)
    {
        std::vector<Point> points;
        std::vector<Point> lowest_points;
        std::vector <std::vector<short>> map;

        if (testing)
            map = input_test_data;
        else
            map = input;

        for (int y = 0; y < map.size(); ++y)
        {
            for (int x = 0; x < map[0].size(); ++x)
            {
                Point tmp = Point(x, y, map[y][x]);
                if(y > 0)
                {
                    auto up = std::make_shared<Point>(x, y - 1, map[y-1][x]);
                    tmp.up = up;
                }
                if (y < map.size() - 1)
                {
                    auto down = std::make_shared<Point>(x, y + 1, map[y+1][x]);
                    tmp.down = down;
                }
                if (x > 0)
                {
                    auto left = std::make_shared<Point>(x - 1, y, map[y][x - 1]);
                    tmp.left = left;
                }
                if (x < map[0].size() - 1)
                {
                    auto right = std::make_shared<Point>(x + 1, y, map[y][x + 1]);
                    tmp.right = right;
                }

                points.emplace_back(tmp);
            }
        }
        int sum = 0;

        for (auto point: points)
        {
            if (point.is_lowest())
            {
                lowest_points.emplace_back(point);
                int val = point.value;
                sum += ++val;
            }
        }

        std::cout << sum << std::endl;
    }
}