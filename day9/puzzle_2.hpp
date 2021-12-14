//
// Created by felix on 14.12.21.
//

#ifndef DAY9_PUZZLE_2_HPP
#define DAY9_PUZZLE_2_HPP

#include <numeric>

namespace AOC
{
    void puzzle_2(const bool testing = true)
    {
        std::vector <std::vector<short>> map;
        std::vector<std::vector<std::shared_ptr<Point>>> points;
        std::vector<int> basin_sizes;
        int result = 1;

        if (testing)
            map = input_test_data;
        else
            map = input;

        for (int y = 0; y < map.size(); ++y)
        {
            std::vector<std::shared_ptr<Point>> x_points;
            for (int x = 0; x < map[0].size(); ++x)
            {
                auto new_point = std::make_shared<Point>(x, y, map[y][x]);
                if (x > 0)
                {
                    std::shared_ptr<Point> left = x_points[x - 1];
                    new_point->left = left;
                    left->right = new_point;
                }
                if (y > 0)
                {
                    std::shared_ptr<Point> above = points[y - 1][x];
                    new_point->up = above;
                    above->down = new_point;
                }
                x_points.emplace_back(new_point);
            }
            points.emplace_back(x_points);
        }

        for (const auto & x_pts : points)
        {
            for(auto &point : x_pts)
            {
                if (point->is_lowest())
                    basin_sizes.emplace_back(point->basin_size());
            }
        }

        std::partial_sort(basin_sizes.begin(), basin_sizes.begin() + 3, basin_sizes.end(), std::greater{});


        for (int idx = 0; idx < 3; ++idx)
        {
            result *= basin_sizes[idx];
        }
        std::cout << result << std::endl;
    }
}
#endif //DAY9_PUZZLE_2_HPP
