//
// Created by felix on 05.12.21.
//

#ifndef DAY5_DIAGRAM_HPP
#define DAY5_DIAGRAM_HPP

#include <string>
#include <vector>

#include "Point.hpp"


class Diagram
{
private:
    std::vector<std::vector<Point>> _board;

public:
    Diagram(const int &columns, const int &rows);
    ~Diagram() = default;
    void display();
    void add_entries(const std::vector<int> vents);
    int points_with_min_x_visits(const int min);
};


#endif //DAY5_DIAGRAM_HPP
