//
// Created by felix on 20.12.21.
//

#ifndef DAY11_OCTUPUS_HPP
#define DAY11_OCTUPUS_HPP

#include <iostream>
#include <vector>

class Octupus
{
private:
    unsigned short _x;
    unsigned short _y;
    unsigned short energyLevel;
    bool _prepared4Flash;

    void _increasesAdjacent(std::vector<std::vector<Octupus>> &grid) const;

public:
    explicit Octupus(unsigned short i, unsigned short x, unsigned short y) : energyLevel(i), _x(x), _y(y)
    {
        _prepared4Flash = false;
    }

    void flash(std::vector<std::vector<Octupus>> &grid);

    int flashed();

    void increaseEnergyLevel();
    void increaseEnergyLevel(std::vector<std::vector<Octupus>> &grid, bool is_adjacent = false);

    [[nodiscard]] unsigned short get_energyLevel() const;
    [[nodiscard]] bool is_flashed() const;

};

#endif //DAY11_OCTUPUS_HPP
