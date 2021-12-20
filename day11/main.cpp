//
// Created by felix on 19.12.21.
//
#include <iostream>

#include "input.hpp"
#include "Octupus.hpp"

using OctupusVec = std::vector<std::vector<Octupus>>;

[[nodiscard]] OctupusVec init(std::vector<std::vector<unsigned short >> &grid, const int &x_size)
{
    int x, y;
    OctupusVec _octpusGrid;
    _octpusGrid.reserve(octpusGrid.size());

    for(y = 0; y < octpusGrid.size(); ++y)
    {
        std::vector<Octupus> _tmp;
        _tmp.reserve(x_size);
        for(x = 0; x < x_size; ++x)
        {
            _tmp.emplace_back(octpusGrid[y][x], x, y);
        }
        _octpusGrid.emplace_back(_tmp);
    }

    return _octpusGrid;
}

void step2(OctupusVec &grid)
{
    for(auto &y_row: grid)
    {
        for(auto &x : y_row)
        {
            x.increaseEnergyLevel(grid);
        }
    }
}

void step3(OctupusVec &grid, unsigned long &total_flashes)
{
    for(auto &y_row: grid)
    {
        for(auto &x : y_row)
        {
            total_flashes += x.flashed();
        }
    }
}

void display(const OctupusVec &grid, const size_t x_size)
{
    int x, y;
    for(y = 0; y < grid.size(); ++y)
    {
        for(x = 0; x < x_size; ++x)
        {
            auto val = grid[y][x];
            if (val.is_flashed())
                std::cout << 0 << ";";
            else
                std::cout << val.get_energyLevel() << ";";
        }
        std::cout << std::endl;
    }
}

void part_one(OctupusVec &grid)
{
    unsigned long total_flashes = 0;

    for(int i = 0; i < 100; ++i)
    {
        step2(grid);
        step3(grid, total_flashes);
    }

    std::cout << "Total flashes after 100 loops: " << total_flashes << std::endl;
}

void part_two(OctupusVec &grid)
{
    unsigned long total_flashes = 0;
    unsigned int run = 100;

    while (total_flashes != 100)
    {
        total_flashes = 0;
        step2(grid);
        step3(grid, total_flashes);
        ++run;
    }

    std::cout << "After " << run << " runs all Octopus are flashing at the same time."<< std::endl;
}

int main()
{
    int x_size = octpusGrid[0].size();
    OctupusVec _octpusGrid = init(octpusGrid, x_size);

    part_one(_octpusGrid);
    part_two(_octpusGrid);

    exit(EXIT_SUCCESS);
}
