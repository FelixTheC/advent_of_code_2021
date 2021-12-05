//
// Created by felix on 05.12.21.
//

#include "Point.hpp"

Point::Point(const int &x, const int &y) : _x(x), _y(y)
{}

void Point::visit(const int &x, const int &y)
{
    if((x == _x) && (y == _y))
        ++_visit;
}

void Point::print_pos()
{
    std::cout << "(" << _x << "," << _y << ")";
}

int Point::get_visitations()
{
    return _visit;
}
