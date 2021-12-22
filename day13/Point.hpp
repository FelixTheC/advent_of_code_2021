//
// Created by felix on 22.12.21.
//

#ifndef DAY13_POINT_HPP
#define DAY13_POINT_HPP

#include <ostream>

using u16int = int;

class Point
{
private:
    u16int x;
    u16int y;
    char symbol = '.';
public:
    Point(u16int _x, u16int _y, char _symbol) : x(_x), y(_y), symbol(_symbol) {};
    void foldX(u16int line);
    void foldY(u16int line);
    bool isSymbol(char _symbol) const;

    bool operator< (const Point &rhs) const;
    bool operator> (const Point &rhs) const;
    bool operator== (const Point &rhs) const;
    void display() const;

    u16int getX() const;
    u16int getY() const;

    char getSymbol() const;
};


#endif //DAY13_POINT_HPP
