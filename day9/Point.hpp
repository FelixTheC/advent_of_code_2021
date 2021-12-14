//
// Created by felix on 14.12.21.
//

#ifndef DAY9_POINT_HPP
#define DAY9_POINT_HPP
#include <iostream>
#include <memory>

struct Point
{
    Point(short x, short y, short val) : x(x), y(y), value(val){};
    ~Point()
    {
        up.reset();
        down.reset();
        left.reset();
        right.reset();
        up = nullptr;
        down = nullptr;
        left = nullptr;
        right = nullptr;
    };
    short x;
    short y;
    short value = 9;
    bool visited = false;

    std::shared_ptr<Point> up = nullptr;
    std::shared_ptr<Point> down = nullptr;
    std::shared_ptr<Point> left = nullptr;
    std::shared_ptr<Point> right = nullptr;

    [[nodiscard]] bool is_lowest() const;
    int basin_size();
};


#endif //DAY9_POINT_HPP
