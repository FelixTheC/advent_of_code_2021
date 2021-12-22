//
// Created by felix on 22.12.21.
//

#include <iostream>
#include "Point.hpp"

void Point::foldX(u16int line)
{
    if (line < x)
    {
        x = (2 * line) - x;
        if (x < 0)
            symbol = '|';
    }
    if (line == x)
        symbol = '|';
}

void Point::foldY(u16int line)
{
    if (line < y)
    {
        y = (2 * line) - y;
        if (y < 0)
            symbol = '|';
    }
    if (line == y)
        symbol = '|';
}

bool Point::isSymbol(char _symbol) const
{
    return symbol == _symbol;
}

bool Point::operator<(const Point &rhs) const
{
    if (y == rhs.y)
        return x < rhs.x;
    else
        return y < rhs.y;
}

bool Point::operator>(const Point &rhs) const
{
    if (y == rhs.y)
        return x > rhs.x;
    else
        return y > rhs.y;
}

bool Point::operator==(const Point &rhs) const
{
    return y == rhs.y && x == rhs.x;
}

void Point::display() const
{
    std::cout << "y: " << y << " x: " << x;
}

u16int Point::getX() const
{
    return x;
}

u16int Point::getY() const
{
    return y;
}

char Point::getSymbol() const
{
    return symbol;
}
