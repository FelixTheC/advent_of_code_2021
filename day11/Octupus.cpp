//
// Created by felix on 20.12.21.
//

#include "Octupus.hpp"

void Octupus::flash(std::vector<std::vector<Octupus>> &grid)
{
    _prepared4Flash = true;
    _increasesAdjacent(grid);
}

int Octupus::flashed()
{
    if (energyLevel > 9)
    {
        energyLevel = 0;
        _prepared4Flash = false;
        return 1;
    }
    return 0;
}

void Octupus::increaseEnergyLevel(std::vector<std::vector<Octupus>> &grid, bool is_adjacent)
{
    if (energyLevel >= 9 && !_prepared4Flash)
        flash(grid);
    ++energyLevel;
}

void Octupus::_increasesAdjacent(std::vector<std::vector<Octupus>> &grid) const
{
    size_t x_size = grid[0].size() - 1;
    auto current_val = grid[_y][_x];
    if (current_val.energyLevel < 9)
        return void();

    if (_y == 0 && _x == 0)
    {
        grid[_y + 1][_x].increaseEnergyLevel(grid, true);
        grid[_y + 1][_x + 1].increaseEnergyLevel(grid, true);
        grid[_y][_x + 1].increaseEnergyLevel(grid, true);
    }
    else if (_y < grid.size() - 1 && _x == x_size)
    {
        if(_y > 0)
        {
            grid[_y - 1][_x].increaseEnergyLevel(grid, true);
            grid[_y - 1][_x - 1].increaseEnergyLevel(grid, true);
        }
        grid[_y + 1][_x].increaseEnergyLevel(grid, true);
        grid[_y + 1][_x - 1].increaseEnergyLevel(grid, true);
        grid[_y][_x - 1].increaseEnergyLevel(grid, true);
    }
    else if (_y == grid.size() - 1 && _x < x_size - 1)
    {
        grid[_y - 1][_x].increaseEnergyLevel(grid, true);
        grid[_y - 1][_x + 1].increaseEnergyLevel(grid, true);
        grid[_y][_x + 1].increaseEnergyLevel(grid, true);
        if(_x > 0)
        {
            grid[_y - 1][_x - 1].increaseEnergyLevel(grid, true);
            grid[_y][_x - 1].increaseEnergyLevel(grid, true);
        }
    }
    else
    {
        grid[_y][_x + 1].increaseEnergyLevel(grid, true);

        if (_y > 0)
        {
            grid[_y - 1][_x].increaseEnergyLevel(grid, true);
            grid[_y - 1][_x + 1].increaseEnergyLevel(grid, true);
        }
        if(_y < grid.size() - 1)
        {
            grid[_y + 1][_x].increaseEnergyLevel(grid, true);
            grid[_y + 1][_x + 1].increaseEnergyLevel(grid, true);
        }

        if(_x > 0)
        {
            grid[_y][_x - 1].increaseEnergyLevel(grid, true);
            if (_y > 0)
                grid[_y - 1][_x - 1].increaseEnergyLevel(grid, true);
            if(_y < grid.size() - 1)
                grid[_y + 1][_x - 1].increaseEnergyLevel(grid, true);
        }
    }
}

unsigned short Octupus::get_energyLevel() const
{
    return energyLevel;
}

void Octupus::increaseEnergyLevel()
{
    ++energyLevel;
}

bool Octupus::is_flashed() const
{
    return _prepared4Flash;
}
