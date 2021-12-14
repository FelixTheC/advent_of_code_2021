//
// Created by felix on 14.12.21.
//

#include "Point.hpp"
bool Point::is_lowest() const
{
    bool result = true;
    if (up != nullptr)
        result &= up->value > value;
    if (down != nullptr)
        result &= down->value > value;
    if (left != nullptr)
        result &= left->value > value;
    if (right != nullptr)
        result &= right->value > value;
    return result;
}

int Point::basin_size()
{
    visited = true;

    int result = 1;

    if (up != nullptr && !up->visited)
        if (up->value < 9)
            result += up->basin_size();
    if (down != nullptr && !down->visited)
        if (down->value < 9)
            result += down->basin_size();
    if (left != nullptr && !left->visited)
        if (left->value < 9)
            result += left->basin_size();
    if (right != nullptr && !right->visited)
        if (right->value < 9)
            result += right->basin_size();

    return result;
}
