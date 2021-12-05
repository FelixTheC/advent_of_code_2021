//
// Created by felix on 05.12.21.
//

#ifndef DAY5_POINT_HPP
#define DAY5_POINT_HPP

#include <iostream>

class Point
{
private:
    int _x, _y, _visit = 0;

public:
    Point(const int &x, const int &y);
    ~Point() = default;
    void visit(const int &x, const int &y);
    void print_pos();
    int get_visitations();
};


#endif //DAY5_POINT_HPP
