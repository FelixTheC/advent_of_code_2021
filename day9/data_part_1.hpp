//
// Created by felix on 11.12.21.
//

#ifndef DAY9_DATA_PART_1_HPP
#define DAY9_DATA_PART_1_HPP
const std::vector <std::vector<short>> input = {
        {5, 7, 9, 6, 7, 9, 8, 6, 2, 1, 2, 3, 7, 9, 9, 5, 4, 9, 8, 7, 6, 5, 4, 3, 4, 5, 6, 7, 9, 8, 7, 5, 4, 2, 9, 9, 9, 7, 6, 5, 6, 7, 9, 9, 8, 7, 5, 4, 5, 6, 7, 9, 1, 0, 9, 8, 7, 8, 9, 9, 9, 8, 7, 7, 8, 9, 9, 7, 8, 9, 8, 7, 6, 5, 3, 2, 1, 2, 3, 4, 5, 6, 9, 9, 8, 9, 9, 9, 8, 7, 6, 8, 8, 7, 8, 9, 9, 9, 2, 1},
        {4, 6, 4, 5, 9, 7, 6, 4, 3, 4, 4, 5, 6, 7, 8, 9, 3, 4, 9, 6, 5, 4, 3, 2, 1, 2, 9, 8, 9, 9, 7, 6, 7, 9, 8, 9, 8, 6, 5, 4, 6, 9, 8, 9, 8, 7, 6, 3, 5, 6, 7, 8, 9, 9, 8, 7, 6, 7, 8, 9, 7, 6, 5, 6, 7, 8, 9, 6, 9, 8, 7, 6, 5, 4, 3, 2, 0, 1, 2, 3, 4, 7, 8, 9, 7, 8, 9, 9, 8, 6, 5, 6, 7, 6, 7, 9, 8, 7, 9, 9},
        {3, 2, 3, 4, 9, 8, 7, 5, 4, 5, 9, 7, 8, 9, 9, 3, 2, 9, 8, 7, 9, 5, 4, 1, 0, 9, 8, 9, 9, 9, 8, 9, 8, 9, 7, 8, 9, 5, 4, 3, 2, 5, 6, 8, 9, 7, 6, 4, 6, 7, 8, 9, 4, 9, 8, 7, 5, 6, 7, 8, 9, 5, 4, 6, 8, 9, 6, 5, 7, 9, 8, 7, 7, 8, 4, 2, 1, 2, 3, 4, 5, 6, 9, 7, 6, 7, 8, 9, 9, 5, 4, 3, 4, 5, 9, 8, 5, 6, 7, 8},
        {4, 3, 5, 6, 7, 9, 8, 6, 7, 9, 9, 8, 9, 9, 9, 9, 0, 1, 9, 9, 8, 7, 3, 2, 9, 8, 7, 8, 9, 9, 9, 7, 9, 8, 6, 7, 9, 7, 6, 5, 3, 4, 5, 6, 8, 9, 8, 5, 6, 9, 9, 1, 2, 9, 6, 5, 4, 5, 8, 9, 0, 1, 3, 4, 7, 8, 9, 4, 6, 7, 9, 9, 8, 9, 5, 6, 8, 9, 9, 9, 6, 7, 8, 9, 5, 6, 9, 8, 6, 4, 3, 2, 3, 9, 8, 7, 4, 5, 7, 9},
        {6, 4, 6, 7, 9, 9, 9, 7, 8, 9, 9, 9, 9, 8, 9, 8, 9, 3, 4, 9, 7, 6, 5, 9, 8, 9, 6, 7, 9, 8, 7, 6, 7, 6, 5, 6, 8, 9, 9, 6, 4, 5, 7, 9, 9, 9, 9, 6, 7, 9, 9, 9, 9, 8, 7, 6, 3, 6, 7, 8, 9, 3, 4, 5, 6, 9, 1, 3, 4, 6, 7, 8, 9, 7, 6, 9, 9, 8, 7, 8, 9, 8, 9, 3, 4, 9, 8, 7, 6, 5, 1, 0, 9, 8, 7, 6, 3, 4, 5, 6},
        {7, 5, 9, 8, 9, 9, 7, 9, 9, 9, 9, 8, 7, 7, 9, 6, 8, 9, 9, 9, 8, 9, 9, 8, 7, 9, 5, 9, 8, 7, 6, 5, 4, 3, 4, 5, 6, 7, 8, 9, 5, 6, 9, 8, 9, 8, 9, 9, 8, 9, 9, 8, 7, 6, 5, 1, 2, 5, 6, 7, 8, 9, 5, 6, 9, 1, 0, 2, 9, 8, 8, 9, 9, 8, 9, 8, 7, 7, 6, 7, 9, 9, 1, 2, 3, 9, 9, 8, 8, 6, 2, 9, 8, 7, 6, 5, 2, 3, 4, 5},
        {8, 7, 8, 9, 8, 7, 6, 7, 8, 9, 8, 6, 5, 6, 8, 5, 5, 7, 8, 9, 9, 9, 8, 7, 6, 6, 4, 5, 9, 8, 7, 6, 6, 5, 5, 6, 7, 9, 9, 8, 6, 8, 9, 6, 5, 6, 7, 8, 9, 8, 7, 6, 5, 5, 4, 0, 3, 4, 8, 9, 9, 9, 9, 9, 8, 9, 1, 9, 8, 9, 9, 9, 8, 9, 8, 7, 5, 6, 4, 6, 7, 9, 0, 9, 9, 7, 8, 9, 8, 7, 9, 8, 7, 6, 5, 4, 3, 4, 5, 6},
        {9, 8, 9, 8, 7, 6, 5, 4, 9, 8, 9, 7, 4, 3, 2, 4, 4, 5, 6, 7, 9, 9, 8, 6, 5, 5, 3, 4, 5, 9, 8, 7, 8, 6, 7, 8, 8, 9, 9, 8, 7, 9, 8, 6, 4, 5, 8, 8, 9, 9, 8, 5, 4, 3, 2, 1, 2, 6, 9, 5, 4, 9, 8, 7, 7, 8, 9, 8, 7, 8, 9, 8, 7, 6, 5, 4, 3, 2, 3, 5, 6, 7, 9, 8, 8, 6, 9, 8, 9, 8, 9, 9, 8, 7, 6, 6, 4, 6, 7, 8},
        {9, 9, 8, 9, 9, 9, 7, 9, 8, 7, 5, 4, 3, 2, 1, 2, 3, 6, 7, 9, 8, 7, 6, 5, 4, 3, 2, 3, 4, 5, 9, 8, 9, 7, 8, 9, 9, 5, 4, 9, 8, 9, 5, 4, 3, 4, 5, 6, 9, 8, 7, 6, 5, 5, 6, 4, 3, 7, 8, 9, 9, 8, 7, 6, 5, 9, 9, 9, 6, 7, 9, 9, 6, 5, 4, 3, 2, 1, 2, 4, 5, 9, 8, 7, 6, 5, 8, 7, 8, 9, 8, 9, 9, 8, 7, 9, 8, 7, 8, 9},
        {9, 8, 7, 7, 9, 8, 9, 9, 9, 7, 6, 6, 2, 1, 0, 1, 4, 5, 6, 7, 9, 8, 7, 6, 5, 4, 3, 4, 5, 6, 7, 9, 9, 8, 9, 6, 7, 9, 3, 2, 9, 8, 7, 6, 2, 4, 7, 7, 8, 9, 8, 9, 7, 8, 7, 5, 4, 8, 9, 9, 9, 9, 8, 9, 6, 7, 9, 4, 5, 9, 9, 8, 7, 6, 8, 7, 3, 0, 1, 3, 4, 9, 8, 7, 5, 4, 5, 6, 9, 6, 7, 8, 9, 9, 8, 9, 9, 8, 9, 3},
        {8, 7, 6, 5, 6, 7, 8, 9, 9, 8, 9, 8, 3, 2, 3, 2, 3, 6, 7, 8, 9, 9, 8, 9, 6, 7, 6, 5, 7, 8, 8, 9, 3, 9, 3, 4, 6, 8, 9, 1, 2, 9, 5, 4, 3, 4, 9, 9, 9, 9, 9, 9, 8, 9, 9, 6, 5, 9, 8, 7, 9, 6, 9, 9, 8, 9, 4, 3, 4, 9, 8, 9, 9, 7, 9, 6, 5, 3, 2, 6, 5, 6, 9, 5, 4, 3, 4, 4, 7, 5, 6, 9, 1, 0, 9, 2, 3, 9, 6, 4},
        {9, 8, 7, 4, 7, 8, 9, 0, 1, 9, 8, 9, 4, 3, 4, 3, 4, 5, 6, 7, 8, 9, 9, 4, 9, 8, 7, 8, 9, 9, 9, 3, 2, 1, 2, 3, 5, 7, 9, 9, 9, 8, 7, 5, 4, 5, 6, 7, 8, 9, 4, 5, 9, 9, 8, 7, 7, 8, 9, 6, 4, 5, 7, 8, 9, 4, 2, 1, 3, 9, 7, 6, 9, 8, 9, 8, 5, 4, 3, 7, 6, 9, 8, 4, 3, 2, 1, 2, 3, 4, 5, 8, 9, 1, 9, 4, 9, 7, 6, 5},
        {7, 9, 6, 5, 6, 7, 8, 9, 9, 8, 7, 6, 5, 7, 6, 4, 5, 6, 7, 8, 9, 3, 4, 3, 3, 9, 8, 9, 8, 7, 6, 5, 4, 2, 3, 4, 6, 9, 8, 7, 8, 9, 8, 6, 5, 6, 7, 8, 9, 2, 3, 6, 7, 9, 9, 8, 8, 9, 6, 5, 3, 9, 8, 9, 9, 4, 3, 2, 9, 8, 6, 5, 2, 9, 9, 9, 6, 7, 8, 9, 8, 9, 7, 5, 4, 5, 2, 3, 4, 5, 6, 7, 8, 9, 8, 9, 8, 9, 7, 6},
        {6, 5, 9, 8, 7, 8, 9, 1, 0, 9, 9, 7, 6, 9, 7, 5, 6, 9, 8, 9, 2, 1, 0, 1, 2, 3, 9, 8, 9, 9, 9, 7, 6, 3, 4, 5, 7, 8, 9, 6, 5, 5, 9, 8, 6, 7, 9, 9, 7, 6, 4, 7, 9, 8, 9, 9, 9, 8, 7, 9, 9, 8, 9, 9, 8, 7, 4, 5, 6, 9, 5, 4, 1, 0, 9, 8, 7, 9, 9, 7, 9, 8, 7, 6, 5, 6, 7, 6, 5, 7, 9, 8, 9, 6, 6, 8, 7, 8, 9, 7},
        {5, 4, 3, 9, 8, 9, 8, 9, 2, 9, 9, 8, 9, 9, 8, 9, 7, 8, 9, 9, 6, 2, 1, 2, 3, 4, 5, 7, 8, 9, 9, 8, 9, 4, 5, 6, 8, 9, 8, 9, 4, 3, 5, 9, 9, 8, 9, 9, 8, 7, 9, 9, 8, 7, 8, 9, 9, 9, 9, 8, 9, 7, 9, 8, 7, 6, 5, 7, 9, 8, 4, 3, 2, 1, 4, 9, 8, 9, 8, 6, 4, 9, 9, 8, 7, 7, 8, 7, 8, 9, 9, 9, 6, 5, 4, 5, 6, 9, 8, 9},
        {5, 2, 1, 2, 9, 8, 7, 8, 9, 8, 9, 9, 9, 9, 9, 9, 8, 9, 9, 8, 5, 4, 3, 3, 6, 5, 6, 8, 9, 9, 9, 9, 8, 9, 8, 7, 9, 9, 7, 9, 3, 2, 6, 5, 6, 9, 1, 0, 9, 9, 8, 9, 5, 6, 7, 8, 9, 8, 8, 7, 9, 6, 8, 9, 8, 7, 8, 9, 8, 7, 5, 4, 4, 2, 3, 4, 9, 9, 5, 4, 3, 4, 5, 9, 9, 8, 9, 8, 9, 9, 9, 8, 7, 4, 3, 4, 5, 6, 7, 9},
        {4, 3, 0, 9, 8, 7, 5, 9, 8, 7, 9, 9, 9, 8, 7, 6, 9, 9, 8, 7, 6, 5, 6, 8, 7, 6, 7, 9, 9, 8, 9, 8, 7, 8, 9, 9, 8, 7, 6, 5, 4, 1, 2, 4, 5, 8, 9, 2, 9, 8, 7, 5, 4, 6, 7, 9, 8, 7, 8, 5, 4, 5, 9, 9, 9, 8, 9, 6, 9, 8, 9, 5, 5, 6, 7, 9, 9, 8, 9, 3, 2, 3, 4, 5, 9, 9, 7, 9, 8, 9, 9, 9, 9, 3, 2, 1, 4, 5, 8, 9},
        {5, 9, 9, 6, 9, 5, 4, 6, 7, 6, 7, 9, 9, 9, 8, 4, 3, 2, 9, 8, 7, 7, 7, 8, 8, 9, 8, 9, 8, 7, 8, 9, 6, 9, 8, 9, 9, 8, 7, 4, 3, 2, 4, 5, 6, 7, 8, 9, 9, 7, 6, 5, 3, 5, 9, 8, 7, 6, 7, 4, 3, 4, 8, 9, 9, 9, 6, 5, 4, 9, 8, 7, 7, 7, 8, 9, 8, 7, 8, 9, 1, 2, 3, 9, 8, 7, 6, 7, 7, 8, 9, 9, 8, 4, 3, 2, 3, 4, 5, 6},
        {9, 8, 7, 5, 4, 3, 2, 5, 4, 5, 7, 8, 9, 7, 4, 3, 2, 1, 2, 9, 8, 9, 8, 9, 9, 9, 9, 8, 9, 6, 7, 6, 5, 9, 7, 8, 9, 9, 8, 5, 5, 9, 5, 6, 7, 8, 9, 9, 8, 8, 6, 8, 2, 4, 9, 9, 6, 5, 3, 1, 2, 6, 7, 9, 8, 6, 5, 4, 3, 5, 9, 9, 8, 8, 9, 8, 7, 6, 7, 8, 9, 9, 5, 9, 8, 9, 5, 4, 6, 9, 8, 7, 6, 5, 4, 6, 7, 5, 6, 7},
        {2, 9, 9, 4, 3, 2, 1, 0, 3, 6, 8, 9, 7, 6, 5, 4, 1, 0, 1, 9, 9, 6, 9, 3, 6, 9, 8, 7, 6, 5, 4, 5, 4, 3, 6, 7, 9, 9, 9, 9, 9, 8, 9, 7, 8, 9, 9, 9, 7, 8, 5, 4, 1, 9, 8, 7, 6, 4, 3, 0, 1, 5, 6, 9, 9, 7, 9, 4, 2, 3, 4, 5, 9, 9, 9, 9, 9, 5, 4, 6, 7, 8, 9, 9, 7, 6, 4, 3, 7, 8, 9, 9, 7, 8, 5, 7, 8, 9, 7, 8},
        {0, 9, 8, 7, 4, 3, 2, 1, 2, 8, 9, 9, 8, 7, 6, 3, 2, 1, 9, 8, 7, 5, 4, 2, 4, 6, 9, 8, 7, 6, 3, 2, 1, 2, 4, 7, 8, 9, 9, 8, 9, 7, 8, 9, 9, 9, 8, 7, 6, 5, 4, 3, 2, 9, 8, 7, 7, 3, 2, 1, 2, 4, 5, 8, 9, 9, 8, 9, 0, 1, 2, 6, 7, 8, 9, 8, 7, 6, 7, 8, 8, 9, 5, 9, 8, 7, 3, 2, 3, 4, 5, 9, 8, 8, 7, 8, 9, 9, 8, 9},
        {9, 8, 7, 6, 5, 4, 4, 3, 4, 6, 7, 8, 9, 9, 7, 9, 3, 2, 9, 8, 7, 6, 5, 1, 2, 3, 4, 9, 9, 9, 8, 4, 0, 1, 5, 6, 9, 8, 9, 7, 5, 6, 9, 2, 3, 4, 9, 8, 7, 9, 9, 4, 9, 8, 7, 6, 5, 4, 3, 4, 3, 4, 5, 7, 8, 9, 7, 8, 9, 2, 4, 7, 8, 9, 9, 9, 8, 7, 8, 9, 9, 3, 3, 4, 9, 8, 9, 1, 2, 3, 4, 8, 9, 9, 9, 9, 8, 6, 9, 5},
        {9, 9, 8, 9, 8, 7, 5, 6, 7, 9, 8, 9, 9, 8, 9, 8, 9, 3, 9, 9, 8, 4, 7, 0, 1, 4, 5, 9, 8, 8, 6, 2, 1, 2, 3, 9, 8, 7, 8, 6, 4, 5, 6, 9, 4, 6, 7, 9, 9, 8, 8, 9, 9, 9, 8, 7, 9, 5, 4, 6, 4, 5, 6, 7, 8, 9, 6, 7, 8, 9, 9, 8, 9, 8, 9, 6, 9, 9, 9, 3, 2, 1, 2, 3, 4, 9, 8, 9, 3, 4, 5, 6, 7, 8, 9, 8, 7, 5, 4, 4},
        {9, 9, 9, 7, 9, 8, 7, 8, 8, 9, 9, 9, 8, 7, 9, 7, 9, 9, 8, 7, 4, 3, 2, 1, 2, 5, 9, 8, 7, 6, 5, 3, 2, 3, 9, 8, 7, 6, 5, 4, 3, 9, 7, 8, 9, 9, 9, 8, 9, 7, 7, 8, 9, 9, 9, 9, 8, 9, 9, 7, 8, 6, 7, 9, 9, 4, 5, 6, 9, 8, 9, 9, 9, 7, 6, 5, 6, 7, 8, 9, 3, 0, 3, 4, 9, 8, 7, 8, 9, 5, 6, 9, 9, 9, 8, 9, 8, 4, 3, 3},
        {8, 9, 8, 6, 7, 9, 8, 9, 9, 9, 9, 8, 7, 6, 7, 6, 7, 8, 9, 6, 5, 5, 3, 2, 9, 6, 7, 9, 8, 7, 6, 4, 3, 9, 8, 7, 6, 5, 4, 1, 2, 8, 9, 9, 9, 8, 8, 7, 8, 6, 5, 6, 8, 9, 9, 8, 6, 7, 8, 9, 8, 7, 9, 1, 2, 3, 9, 9, 5, 6, 7, 9, 9, 9, 5, 4, 3, 4, 5, 9, 5, 9, 4, 9, 9, 8, 6, 7, 8, 9, 7, 8, 9, 9, 7, 6, 5, 3, 2, 1},
        {7, 8, 4, 5, 6, 7, 9, 2, 1, 9, 8, 7, 8, 5, 6, 5, 6, 7, 8, 9, 7, 6, 5, 9, 8, 9, 9, 9, 9, 8, 7, 5, 5, 6, 9, 9, 8, 7, 3, 2, 3, 7, 8, 9, 9, 7, 6, 6, 7, 5, 4, 5, 7, 9, 8, 6, 5, 6, 7, 8, 9, 8, 9, 2, 3, 9, 8, 7, 4, 5, 9, 9, 9, 7, 6, 5, 2, 3, 7, 8, 9, 8, 9, 8, 7, 6, 5, 6, 7, 8, 9, 9, 9, 8, 6, 5, 4, 3, 1, 0},
        {6, 4, 3, 4, 7, 9, 8, 9, 9, 8, 7, 6, 5, 4, 5, 4, 5, 6, 7, 8, 9, 7, 9, 8, 7, 8, 9, 8, 7, 9, 8, 6, 7, 7, 8, 9, 9, 5, 4, 3, 4, 6, 7, 8, 9, 6, 5, 5, 3, 2, 3, 4, 9, 8, 7, 5, 4, 5, 8, 7, 8, 9, 8, 9, 4, 9, 9, 6, 3, 6, 8, 7, 8, 9, 9, 2, 1, 5, 6, 9, 8, 7, 9, 7, 5, 3, 4, 5, 8, 9, 9, 2, 1, 9, 9, 6, 4, 3, 2, 4},
        {0, 1, 2, 3, 9, 8, 7, 9, 9, 9, 8, 7, 4, 3, 4, 3, 4, 5, 6, 7, 8, 9, 8, 7, 6, 7, 9, 9, 5, 4, 9, 7, 8, 9, 9, 8, 7, 6, 5, 4, 5, 9, 8, 9, 9, 8, 4, 2, 1, 0, 5, 6, 9, 8, 9, 4, 3, 4, 7, 6, 7, 8, 7, 9, 9, 7, 6, 5, 2, 1, 7, 6, 7, 9, 8, 9, 2, 4, 9, 8, 7, 6, 5, 4, 3, 2, 3, 4, 9, 9, 8, 9, 0, 9, 8, 7, 8, 4, 3, 4},
        {4, 3, 3, 9, 8, 7, 6, 7, 9, 8, 9, 5, 5, 1, 0, 2, 3, 6, 7, 8, 9, 8, 9, 8, 5, 6, 7, 8, 9, 3, 9, 8, 9, 1, 0, 9, 9, 9, 6, 7, 8, 9, 9, 8, 7, 6, 5, 4, 2, 1, 5, 9, 8, 7, 5, 3, 2, 3, 8, 5, 4, 5, 6, 8, 9, 6, 5, 4, 1, 0, 1, 5, 6, 9, 7, 8, 9, 5, 6, 9, 9, 7, 6, 8, 4, 4, 5, 6, 7, 9, 7, 8, 9, 9, 9, 8, 9, 5, 4, 5},
        {5, 4, 9, 8, 7, 6, 5, 9, 8, 6, 5, 4, 3, 2, 3, 4, 4, 8, 8, 9, 8, 7, 8, 9, 4, 7, 9, 9, 0, 1, 2, 9, 9, 9, 1, 2, 9, 8, 7, 8, 9, 9, 9, 9, 8, 7, 6, 5, 3, 2, 4, 9, 9, 8, 6, 2, 1, 0, 1, 2, 3, 4, 6, 7, 8, 9, 4, 3, 2, 1, 2, 4, 9, 7, 6, 9, 7, 6, 7, 8, 9, 8, 7, 9, 5, 8, 6, 7, 9, 5, 6, 7, 8, 9, 1, 9, 9, 6, 5, 6},
        {6, 5, 9, 9, 7, 5, 4, 3, 9, 7, 6, 5, 4, 5, 4, 5, 5, 8, 9, 9, 9, 6, 7, 8, 9, 8, 9, 9, 9, 9, 3, 9, 9, 8, 9, 4, 9, 9, 9, 9, 9, 9, 8, 7, 9, 9, 7, 6, 7, 9, 9, 8, 9, 7, 5, 3, 5, 1, 2, 3, 7, 9, 9, 8, 9, 9, 5, 4, 3, 2, 3, 9, 8, 7, 5, 8, 9, 9, 8, 9, 8, 9, 9, 8, 6, 7, 8, 8, 9, 4, 6, 9, 9, 9, 0, 9, 8, 7, 8, 9},
        {7, 9, 8, 8, 7, 3, 2, 1, 9, 8, 7, 6, 5, 6, 5, 7, 6, 7, 8, 9, 7, 5, 6, 9, 8, 9, 9, 9, 8, 7, 9, 8, 7, 6, 8, 9, 8, 9, 4, 6, 9, 9, 9, 5, 4, 4, 9, 7, 9, 8, 7, 7, 9, 8, 9, 8, 7, 6, 4, 5, 6, 7, 8, 9, 9, 8, 7, 6, 4, 3, 4, 5, 9, 6, 4, 7, 8, 9, 9, 8, 7, 6, 0, 9, 7, 8, 9, 9, 5, 3, 4, 8, 7, 8, 9, 9, 9, 8, 9, 9},
        {9, 8, 7, 6, 5, 4, 6, 0, 1, 9, 8, 7, 8, 7, 6, 7, 8, 8, 9, 9, 8, 4, 5, 6, 7, 8, 9, 9, 9, 6, 8, 7, 6, 5, 6, 6, 7, 9, 3, 9, 8, 9, 6, 5, 3, 2, 9, 8, 9, 9, 6, 6, 5, 9, 2, 9, 8, 7, 8, 8, 7, 8, 9, 3, 2, 9, 8, 7, 5, 4, 5, 9, 8, 7, 5, 6, 7, 8, 9, 9, 6, 5, 1, 9, 8, 9, 9, 7, 3, 2, 3, 4, 5, 6, 7, 9, 9, 9, 8, 9},
        {0, 9, 9, 8, 7, 5, 7, 8, 9, 8, 9, 8, 9, 8, 9, 9, 9, 9, 2, 0, 9, 9, 7, 8, 9, 9, 8, 8, 7, 5, 4, 5, 4, 3, 4, 5, 7, 8, 9, 8, 7, 8, 9, 5, 4, 0, 1, 9, 9, 8, 5, 4, 3, 0, 1, 2, 9, 8, 9, 9, 8, 9, 8, 4, 1, 2, 9, 8, 6, 6, 7, 8, 9, 9, 9, 8, 9, 9, 9, 9, 5, 4, 2, 4, 9, 9, 8, 6, 4, 1, 2, 3, 4, 5, 8, 9, 9, 8, 7, 8},
        {1, 2, 9, 9, 8, 9, 8, 9, 8, 7, 6, 9, 9, 9, 5, 4, 9, 5, 4, 2, 9, 9, 9, 9, 9, 8, 7, 6, 5, 4, 3, 2, 1, 2, 3, 4, 8, 9, 8, 7, 6, 9, 8, 9, 2, 1, 5, 9, 8, 7, 6, 3, 2, 1, 2, 3, 4, 9, 9, 9, 9, 8, 7, 3, 2, 3, 4, 9, 7, 7, 9, 9, 5, 6, 7, 9, 4, 3, 9, 7, 6, 5, 3, 5, 6, 8, 9, 7, 6, 0, 1, 2, 3, 4, 9, 8, 8, 7, 6, 7},
        {2, 9, 8, 9, 9, 9, 9, 8, 7, 6, 5, 6, 9, 9, 9, 9, 8, 9, 5, 9, 8, 9, 9, 8, 6, 9, 8, 7, 6, 5, 4, 1, 0, 3, 4, 6, 7, 8, 9, 6, 5, 6, 7, 8, 9, 2, 3, 4, 9, 8, 5, 4, 3, 3, 4, 5, 6, 8, 9, 8, 9, 9, 6, 4, 3, 4, 5, 6, 9, 8, 9, 3, 4, 6, 7, 8, 9, 2, 1, 9, 7, 6, 8, 9, 7, 9, 9, 6, 5, 3, 2, 3, 4, 9, 8, 7, 5, 7, 5, 6},
        {9, 8, 7, 9, 8, 9, 9, 9, 8, 8, 6, 9, 8, 9, 8, 8, 7, 8, 9, 8, 7, 8, 9, 9, 5, 4, 9, 8, 9, 7, 6, 2, 1, 5, 9, 8, 9, 9, 9, 5, 4, 5, 6, 7, 8, 9, 4, 9, 8, 9, 9, 9, 9, 6, 5, 6, 8, 9, 8, 7, 9, 8, 9, 9, 4, 5, 6, 7, 8, 9, 3, 2, 3, 5, 6, 7, 8, 9, 0, 1, 9, 7, 9, 9, 8, 9, 8, 7, 6, 5, 6, 7, 5, 6, 9, 9, 4, 3, 4, 5},
        {8, 7, 6, 5, 6, 7, 7, 8, 9, 9, 9, 8, 7, 6, 7, 7, 6, 9, 7, 6, 6, 7, 8, 9, 6, 3, 2, 9, 8, 6, 5, 4, 2, 3, 4, 9, 9, 9, 8, 9, 9, 9, 7, 9, 9, 5, 9, 8, 7, 8, 7, 8, 8, 9, 7, 7, 9, 8, 7, 6, 8, 7, 7, 8, 9, 6, 8, 8, 9, 5, 4, 3, 8, 6, 7, 8, 9, 9, 1, 2, 9, 8, 9, 6, 9, 3, 9, 8, 9, 6, 7, 8, 9, 9, 8, 7, 3, 2, 0, 1},
        {8, 6, 5, 4, 5, 4, 6, 7, 8, 9, 7, 6, 6, 5, 6, 3, 4, 5, 9, 5, 4, 8, 9, 9, 4, 2, 1, 9, 8, 7, 6, 5, 3, 4, 5, 7, 8, 9, 7, 7, 7, 8, 9, 1, 0, 4, 9, 8, 6, 5, 6, 7, 7, 8, 9, 9, 4, 9, 6, 5, 4, 5, 6, 7, 8, 9, 9, 9, 7, 6, 6, 5, 7, 8, 9, 9, 7, 8, 9, 3, 4, 9, 5, 4, 3, 2, 1, 9, 9, 8, 8, 9, 3, 2, 9, 6, 5, 4, 1, 2},
        {8, 6, 4, 3, 4, 3, 7, 8, 9, 9, 8, 5, 4, 3, 1, 2, 9, 9, 8, 4, 3, 5, 6, 8, 9, 1, 0, 1, 9, 8, 7, 6, 4, 5, 6, 8, 9, 6, 6, 5, 6, 7, 9, 3, 2, 3, 9, 7, 5, 3, 4, 5, 6, 7, 8, 9, 5, 9, 8, 6, 8, 7, 7, 8, 9, 5, 7, 9, 8, 7, 7, 9, 8, 9, 3, 4, 6, 7, 9, 9, 5, 9, 6, 5, 4, 3, 0, 1, 2, 9, 9, 5, 4, 9, 8, 7, 6, 7, 2, 3},
        {6, 5, 3, 2, 1, 2, 6, 7, 7, 8, 9, 6, 9, 4, 0, 9, 8, 7, 6, 4, 2, 4, 5, 7, 8, 9, 1, 2, 4, 9, 8, 7, 5, 6, 7, 9, 6, 5, 5, 3, 5, 6, 8, 9, 3, 9, 8, 6, 3, 2, 0, 3, 4, 5, 6, 8, 9, 9, 9, 7, 9, 9, 8, 9, 6, 4, 6, 7, 9, 9, 8, 9, 9, 0, 1, 2, 5, 6, 7, 8, 9, 8, 9, 7, 6, 4, 3, 2, 3, 5, 8, 9, 5, 6, 9, 8, 7, 8, 9, 4},
        {8, 5, 4, 4, 4, 3, 4, 5, 6, 7, 9, 9, 8, 9, 1, 2, 9, 9, 8, 5, 3, 5, 6, 8, 9, 8, 4, 3, 5, 6, 9, 8, 6, 7, 9, 8, 9, 4, 3, 2, 4, 5, 9, 9, 4, 9, 9, 5, 4, 2, 1, 2, 5, 6, 8, 9, 9, 9, 9, 8, 9, 5, 9, 4, 5, 3, 5, 7, 9, 8, 9, 8, 9, 1, 2, 3, 4, 6, 7, 9, 8, 7, 9, 7, 6, 5, 6, 3, 5, 6, 7, 9, 6, 9, 7, 9, 9, 9, 8, 5},
        {9, 6, 5, 5, 5, 6, 6, 7, 8, 9, 8, 9, 7, 8, 9, 3, 4, 7, 9, 6, 9, 7, 8, 9, 7, 6, 5, 4, 5, 6, 7, 9, 7, 9, 8, 7, 9, 4, 2, 1, 2, 6, 7, 8, 9, 8, 7, 6, 7, 3, 4, 3, 4, 6, 7, 8, 9, 8, 7, 9, 5, 4, 4, 3, 1, 2, 3, 4, 9, 7, 6, 7, 9, 9, 3, 5, 6, 7, 9, 8, 7, 6, 8, 9, 9, 6, 7, 4, 7, 8, 9, 9, 9, 7, 6, 5, 9, 8, 7, 6},
        {9, 7, 7, 6, 7, 8, 9, 9, 9, 8, 6, 5, 6, 7, 9, 9, 5, 6, 7, 9, 8, 9, 9, 9, 8, 7, 6, 5, 6, 7, 8, 9, 9, 8, 9, 6, 7, 9, 9, 2, 3, 4, 9, 9, 2, 9, 8, 7, 6, 5, 5, 6, 5, 7, 8, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 1, 2, 9, 8, 9, 5, 6, 7, 8, 9, 6, 7, 9, 8, 7, 6, 5, 6, 7, 8, 9, 8, 5, 9, 9, 9, 8, 7, 6, 6, 4, 2, 9, 8, 9},
        {9, 9, 8, 8, 8, 9, 9, 8, 7, 5, 4, 3, 4, 6, 7, 8, 9, 7, 9, 8, 7, 8, 9, 9, 9, 8, 7, 9, 8, 8, 9, 9, 8, 7, 6, 5, 7, 8, 8, 9, 4, 5, 8, 9, 1, 9, 9, 9, 7, 9, 6, 7, 6, 8, 9, 7, 9, 8, 8, 6, 5, 4, 5, 2, 1, 9, 9, 8, 6, 7, 4, 5, 6, 9, 8, 7, 9, 8, 7, 6, 5, 4, 5, 6, 7, 8, 9, 6, 7, 9, 8, 7, 6, 5, 4, 3, 1, 0, 9, 6},
        {8, 7, 9, 9, 9, 4, 3, 9, 8, 9, 5, 4, 5, 7, 8, 9, 9, 9, 9, 8, 6, 8, 7, 9, 9, 9, 8, 9, 9, 9, 9, 8, 7, 6, 5, 4, 5, 6, 7, 8, 9, 6, 7, 8, 9, 8, 7, 8, 9, 8, 9, 8, 7, 9, 7, 6, 5, 9, 9, 7, 9, 8, 7, 4, 9, 8, 7, 6, 5, 4, 3, 4, 7, 8, 9, 9, 9, 9, 9, 7, 5, 3, 4, 5, 9, 9, 8, 7, 9, 7, 9, 8, 7, 6, 5, 3, 2, 1, 4, 5},
        {7, 6, 7, 9, 9, 6, 9, 9, 9, 8, 6, 5, 6, 7, 8, 9, 9, 8, 7, 6, 5, 7, 6, 7, 8, 9, 9, 4, 3, 2, 3, 9, 6, 5, 4, 3, 2, 7, 8, 9, 9, 7, 9, 9, 8, 7, 6, 7, 9, 7, 8, 9, 8, 9, 6, 5, 3, 5, 9, 8, 9, 9, 9, 5, 9, 9, 8, 3, 2, 1, 2, 3, 4, 5, 6, 8, 9, 3, 9, 8, 9, 4, 5, 6, 7, 8, 9, 9, 7, 6, 4, 9, 8, 7, 6, 8, 7, 2, 3, 6},
        {7, 5, 6, 7, 8, 9, 8, 9, 5, 9, 7, 6, 7, 8, 9, 3, 9, 7, 6, 5, 4, 3, 4, 6, 7, 9, 9, 5, 9, 0, 9, 8, 7, 6, 6, 4, 5, 6, 7, 8, 9, 8, 9, 9, 9, 6, 5, 4, 5, 6, 7, 8, 9, 6, 5, 4, 2, 3, 5, 9, 9, 9, 8, 9, 8, 9, 9, 7, 5, 4, 3, 5, 9, 6, 7, 9, 4, 2, 1, 9, 8, 6, 7, 8, 9, 9, 6, 8, 9, 7, 3, 1, 9, 9, 8, 7, 5, 3, 4, 5},
        {3, 4, 6, 7, 9, 8, 7, 6, 4, 4, 9, 7, 8, 9, 1, 2, 9, 8, 7, 7, 8, 4, 9, 8, 9, 8, 7, 9, 8, 9, 9, 9, 8, 7, 8, 5, 6, 7, 8, 9, 9, 9, 9, 9, 8, 7, 4, 3, 4, 5, 6, 9, 6, 5, 3, 2, 1, 3, 6, 7, 9, 8, 7, 6, 7, 8, 9, 8, 6, 6, 4, 6, 8, 7, 8, 9, 4, 3, 9, 8, 9, 8, 9, 9, 3, 4, 5, 9, 7, 9, 2, 0, 1, 2, 9, 8, 9, 4, 6, 6},
        {6, 5, 6, 9, 9, 9, 9, 5, 3, 3, 9, 8, 9, 9, 9, 9, 7, 9, 8, 8, 9, 6, 7, 9, 7, 8, 6, 7, 7, 8, 9, 8, 9, 8, 9, 8, 7, 8, 9, 7, 9, 9, 9, 8, 7, 6, 4, 2, 4, 6, 7, 8, 9, 6, 2, 1, 0, 2, 3, 9, 8, 7, 6, 5, 8, 9, 8, 9, 7, 7, 5, 7, 8, 9, 9, 6, 5, 9, 8, 7, 6, 9, 3, 2, 2, 3, 7, 5, 6, 7, 9, 9, 3, 3, 4, 9, 6, 5, 7, 8},
        {8, 6, 7, 8, 9, 9, 8, 9, 2, 1, 2, 9, 6, 7, 8, 9, 6, 7, 9, 9, 8, 7, 8, 9, 6, 5, 4, 5, 6, 9, 8, 7, 6, 9, 3, 9, 9, 9, 8, 6, 7, 8, 9, 7, 6, 4, 3, 1, 2, 3, 9, 8, 9, 9, 3, 9, 2, 3, 4, 9, 9, 6, 5, 4, 5, 6, 7, 8, 9, 7, 6, 8, 9, 3, 9, 8, 9, 9, 9, 9, 5, 4, 2, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 4, 9, 8, 7, 6, 8, 9},
        {9, 7, 9, 9, 8, 6, 7, 8, 9, 0, 1, 4, 5, 6, 7, 9, 5, 4, 2, 9, 9, 8, 9, 8, 7, 8, 9, 6, 7, 8, 9, 9, 5, 4, 2, 3, 4, 9, 9, 5, 6, 9, 8, 7, 6, 5, 1, 0, 1, 2, 5, 6, 7, 8, 9, 8, 9, 4, 9, 8, 7, 5, 4, 3, 4, 5, 8, 9, 9, 9, 7, 9, 1, 2, 4, 9, 8, 9, 9, 8, 9, 5, 3, 1, 2, 3, 4, 7, 8, 9, 9, 9, 9, 5, 7, 9, 8, 7, 8, 9},
        {2, 9, 8, 8, 6, 5, 6, 8, 9, 1, 2, 3, 7, 7, 8, 9, 8, 6, 9, 8, 7, 9, 9, 9, 8, 9, 9, 8, 9, 9, 6, 8, 9, 5, 9, 9, 9, 8, 7, 6, 7, 8, 9, 8, 6, 4, 2, 1, 2, 3, 4, 5, 9, 9, 6, 7, 8, 9, 9, 8, 7, 6, 5, 2, 3, 7, 7, 8, 9, 9, 9, 1, 0, 2, 9, 9, 7, 5, 6, 7, 8, 9, 4, 3, 6, 5, 5, 6, 7, 9, 9, 9, 8, 9, 9, 9, 9, 8, 9, 0},
        {3, 9, 7, 7, 5, 4, 5, 7, 8, 9, 3, 4, 7, 8, 9, 9, 9, 9, 8, 7, 6, 7, 8, 9, 9, 9, 8, 9, 4, 3, 4, 9, 9, 9, 8, 7, 9, 9, 8, 9, 8, 9, 8, 9, 8, 7, 4, 2, 3, 4, 6, 7, 8, 9, 5, 6, 7, 8, 9, 9, 3, 2, 1, 0, 4, 6, 6, 7, 8, 9, 3, 2, 1, 9, 8, 7, 6, 4, 5, 6, 7, 9, 9, 8, 7, 8, 6, 7, 9, 8, 9, 7, 6, 7, 8, 9, 9, 9, 2, 1},
        {9, 8, 6, 5, 4, 3, 7, 8, 9, 6, 5, 5, 6, 7, 8, 9, 9, 9, 9, 9, 4, 6, 7, 9, 9, 8, 7, 6, 5, 4, 5, 9, 9, 8, 7, 6, 7, 9, 9, 9, 9, 8, 7, 9, 7, 6, 5, 3, 4, 7, 8, 9, 9, 5, 4, 5, 8, 9, 9, 9, 7, 6, 2, 1, 2, 4, 5, 6, 7, 9, 4, 5, 9, 8, 7, 6, 4, 3, 7, 8, 9, 8, 7, 9, 8, 9, 7, 9, 8, 7, 6, 5, 4, 5, 9, 7, 8, 9, 4, 3},
        {9, 9, 7, 6, 5, 4, 5, 7, 8, 9, 6, 9, 7, 8, 9, 9, 9, 8, 7, 8, 3, 4, 6, 8, 9, 9, 8, 9, 6, 9, 9, 7, 6, 7, 6, 5, 6, 8, 9, 9, 8, 7, 6, 9, 8, 9, 6, 7, 5, 6, 7, 8, 9, 3, 2, 6, 7, 9, 8, 7, 6, 4, 3, 2, 5, 5, 6, 7, 8, 9, 5, 9, 8, 9, 4, 3, 2, 1, 8, 9, 9, 7, 6, 5, 9, 9, 8, 9, 7, 6, 5, 4, 3, 4, 5, 6, 7, 8, 9, 4},
        {9, 9, 8, 9, 8, 6, 7, 8, 9, 9, 9, 8, 9, 9, 9, 9, 9, 8, 6, 5, 4, 5, 6, 7, 8, 9, 9, 5, 9, 8, 7, 6, 5, 4, 5, 4, 5, 9, 9, 8, 9, 6, 5, 4, 9, 8, 7, 9, 7, 8, 8, 9, 3, 2, 1, 9, 9, 6, 9, 9, 7, 5, 4, 3, 4, 5, 7, 8, 9, 8, 7, 9, 7, 6, 5, 4, 3, 2, 3, 7, 8, 9, 9, 4, 3, 5, 9, 6, 9, 8, 6, 5, 4, 6, 7, 8, 9, 9, 6, 5},
        {8, 8, 9, 6, 9, 7, 8, 9, 9, 9, 8, 7, 9, 8, 7, 8, 9, 9, 7, 6, 6, 8, 7, 8, 9, 2, 1, 3, 9, 8, 6, 5, 4, 3, 2, 3, 4, 9, 8, 7, 8, 9, 4, 3, 4, 9, 8, 9, 8, 9, 9, 6, 5, 4, 9, 8, 7, 5, 6, 9, 8, 6, 6, 5, 6, 7, 8, 9, 0, 9, 9, 9, 8, 9, 6, 5, 5, 3, 4, 5, 6, 7, 8, 9, 2, 3, 4, 5, 6, 9, 7, 6, 5, 6, 7, 9, 8, 9, 8, 7},
        {7, 6, 4, 5, 9, 8, 9, 8, 9, 8, 7, 6, 5, 6, 5, 5, 6, 8, 9, 7, 7, 9, 8, 9, 8, 9, 0, 1, 9, 8, 7, 6, 6, 2, 1, 2, 9, 8, 7, 6, 7, 8, 9, 2, 3, 4, 9, 8, 9, 9, 9, 8, 6, 9, 8, 9, 5, 4, 5, 3, 9, 9, 8, 7, 8, 9, 9, 9, 1, 9, 8, 7, 9, 8, 7, 7, 6, 4, 5, 6, 8, 9, 9, 3, 1, 2, 5, 7, 8, 9, 8, 7, 6, 7, 9, 6, 7, 8, 9, 9},
        {9, 8, 6, 9, 9, 9, 8, 7, 8, 9, 9, 6, 4, 3, 3, 4, 5, 7, 8, 9, 9, 5, 9, 3, 7, 8, 9, 2, 3, 9, 7, 6, 5, 4, 3, 9, 8, 9, 4, 5, 6, 8, 9, 3, 4, 5, 6, 7, 8, 9, 7, 9, 9, 8, 7, 6, 4, 3, 0, 1, 2, 3, 9, 8, 9, 6, 7, 8, 9, 8, 7, 6, 7, 9, 9, 8, 7, 7, 6, 7, 9, 8, 8, 9, 0, 2, 3, 4, 9, 9, 9, 8, 9, 8, 9, 5, 7, 8, 9, 8},
        {6, 9, 9, 8, 7, 8, 9, 6, 7, 9, 8, 9, 2, 1, 2, 3, 4, 5, 7, 8, 9, 4, 3, 2, 5, 9, 4, 3, 4, 9, 8, 7, 6, 5, 9, 8, 7, 8, 3, 4, 5, 6, 8, 9, 5, 6, 8, 8, 9, 4, 6, 7, 8, 9, 8, 9, 5, 2, 1, 3, 4, 5, 7, 9, 6, 5, 6, 8, 9, 9, 6, 5, 6, 5, 4, 9, 8, 8, 7, 8, 9, 7, 7, 8, 9, 6, 5, 6, 7, 9, 9, 9, 9, 9, 5, 4, 6, 4, 5, 7},
        {5, 9, 8, 7, 6, 5, 4, 5, 9, 7, 6, 5, 1, 0, 1, 2, 3, 4, 9, 9, 7, 5, 4, 3, 4, 7, 9, 9, 5, 7, 9, 9, 8, 9, 8, 6, 5, 4, 2, 3, 5, 6, 7, 8, 9, 7, 9, 9, 2, 3, 7, 8, 9, 9, 9, 7, 6, 3, 2, 4, 5, 6, 7, 8, 9, 4, 7, 9, 9, 9, 7, 4, 3, 4, 3, 5, 9, 9, 8, 9, 9, 6, 5, 4, 9, 7, 6, 7, 9, 8, 7, 9, 8, 9, 4, 3, 2, 3, 4, 7},
        {4, 3, 9, 8, 7, 5, 3, 2, 9, 9, 8, 4, 3, 1, 2, 3, 4, 5, 7, 8, 9, 6, 5, 4, 5, 6, 7, 8, 9, 9, 2, 0, 9, 9, 6, 5, 4, 5, 1, 2, 4, 5, 5, 7, 8, 9, 2, 0, 9, 9, 8, 9, 3, 9, 8, 7, 5, 4, 3, 5, 6, 7, 8, 9, 4, 3, 9, 8, 7, 9, 8, 4, 2, 1, 2, 4, 9, 9, 9, 9, 8, 7, 6, 3, 8, 9, 8, 9, 8, 7, 6, 6, 7, 8, 9, 5, 4, 4, 5, 6},
        {1, 2, 3, 9, 8, 5, 4, 9, 8, 7, 6, 5, 3, 2, 3, 8, 7, 6, 8, 9, 9, 8, 9, 5, 6, 9, 9, 9, 9, 8, 9, 2, 9, 8, 7, 4, 3, 1, 0, 1, 2, 3, 4, 6, 7, 8, 9, 9, 8, 9, 9, 4, 2, 9, 8, 7, 6, 5, 7, 6, 8, 8, 9, 9, 5, 9, 8, 7, 6, 5, 4, 3, 1, 0, 2, 9, 8, 9, 2, 1, 9, 6, 5, 4, 7, 8, 9, 8, 9, 6, 5, 4, 6, 6, 7, 9, 5, 5, 6, 7},
        {0, 1, 2, 3, 9, 9, 5, 7, 9, 9, 7, 6, 8, 5, 4, 5, 6, 7, 8, 9, 6, 9, 8, 6, 9, 8, 7, 8, 9, 7, 9, 3, 4, 9, 5, 4, 3, 2, 1, 3, 4, 5, 5, 7, 8, 9, 9, 9, 7, 8, 9, 9, 1, 0, 9, 9, 7, 6, 7, 7, 9, 9, 9, 8, 7, 8, 9, 9, 8, 7, 5, 3, 2, 1, 3, 9, 7, 8, 9, 9, 8, 7, 6, 5, 6, 9, 8, 7, 6, 5, 4, 3, 4, 5, 7, 8, 9, 9, 7, 9},
        {3, 2, 3, 5, 9, 8, 6, 9, 9, 9, 8, 7, 9, 6, 5, 6, 7, 8, 9, 7, 5, 6, 9, 9, 9, 8, 6, 7, 6, 6, 8, 9, 5, 6, 9, 7, 5, 4, 3, 4, 6, 9, 6, 8, 9, 9, 9, 8, 6, 9, 8, 7, 9, 1, 2, 9, 8, 7, 8, 9, 9, 9, 9, 9, 8, 9, 4, 6, 9, 7, 6, 4, 3, 2, 9, 8, 6, 7, 8, 9, 9, 9, 9, 8, 7, 8, 9, 8, 5, 4, 3, 2, 3, 4, 5, 6, 7, 8, 9, 8},
        {9, 9, 4, 5, 7, 9, 9, 8, 7, 6, 9, 9, 8, 7, 9, 8, 8, 9, 7, 6, 4, 5, 9, 8, 7, 6, 5, 4, 4, 5, 6, 8, 9, 9, 8, 7, 6, 5, 9, 5, 9, 8, 9, 9, 8, 9, 7, 6, 5, 9, 7, 6, 8, 9, 9, 9, 9, 8, 9, 9, 9, 8, 8, 6, 9, 8, 9, 9, 8, 7, 6, 5, 9, 9, 8, 7, 5, 6, 7, 9, 9, 8, 9, 9, 8, 9, 9, 9, 8, 6, 4, 3, 6, 5, 7, 8, 8, 9, 7, 7},
        {8, 7, 9, 9, 8, 9, 5, 9, 9, 5, 4, 3, 9, 8, 9, 9, 9, 8, 6, 5, 3, 4, 5, 9, 8, 7, 3, 2, 3, 6, 7, 9, 6, 8, 9, 8, 8, 9, 8, 9, 8, 7, 8, 9, 7, 9, 9, 5, 4, 6, 9, 5, 6, 7, 8, 9, 1, 9, 9, 9, 8, 7, 8, 5, 4, 6, 8, 9, 9, 8, 7, 9, 8, 7, 6, 6, 4, 5, 6, 9, 9, 7, 8, 9, 9, 8, 9, 8, 7, 6, 5, 4, 7, 9, 8, 9, 9, 7, 6, 6},
        {5, 6, 7, 8, 9, 2, 3, 9, 9, 4, 3, 2, 3, 9, 9, 9, 8, 7, 6, 5, 4, 5, 9, 8, 7, 5, 4, 3, 4, 7, 8, 9, 5, 7, 9, 9, 9, 9, 7, 6, 5, 5, 6, 7, 6, 7, 8, 9, 3, 2, 5, 4, 5, 8, 9, 1, 0, 1, 9, 8, 7, 6, 7, 4, 3, 7, 8, 7, 8, 9, 8, 9, 9, 8, 5, 4, 3, 4, 9, 8, 7, 6, 7, 9, 9, 6, 4, 9, 8, 7, 6, 6, 7, 8, 9, 8, 7, 6, 4, 5},
        {4, 5, 6, 7, 9, 1, 9, 8, 7, 6, 2, 1, 4, 8, 9, 9, 9, 8, 7, 6, 8, 9, 9, 9, 8, 9, 5, 4, 9, 8, 9, 5, 4, 6, 8, 9, 8, 7, 6, 5, 4, 3, 2, 3, 5, 6, 7, 8, 9, 1, 2, 3, 6, 7, 8, 9, 1, 9, 9, 8, 6, 5, 4, 3, 2, 4, 5, 6, 7, 9, 9, 9, 8, 7, 6, 5, 4, 6, 7, 9, 6, 5, 6, 7, 8, 9, 9, 9, 9, 8, 7, 7, 8, 9, 2, 9, 8, 7, 5, 6},
        {3, 4, 6, 7, 8, 9, 8, 7, 6, 5, 4, 3, 6, 7, 8, 9, 9, 9, 8, 9, 9, 8, 9, 9, 9, 8, 7, 9, 9, 9, 5, 4, 3, 4, 9, 9, 9, 8, 9, 6, 5, 2, 1, 2, 3, 7, 8, 9, 5, 0, 1, 9, 7, 8, 9, 9, 9, 8, 9, 9, 7, 5, 3, 2, 1, 3, 5, 9, 9, 8, 8, 9, 9, 9, 7, 7, 5, 6, 9, 8, 7, 6, 7, 8, 9, 9, 8, 8, 7, 9, 8, 9, 9, 2, 1, 0, 9, 8, 6, 7},
        {2, 3, 6, 9, 9, 2, 9, 8, 7, 6, 5, 4, 5, 6, 9, 9, 9, 9, 9, 9, 8, 7, 8, 9, 9, 9, 9, 9, 8, 7, 6, 5, 4, 5, 6, 8, 9, 9, 4, 3, 2, 1, 0, 2, 3, 5, 9, 9, 4, 2, 9, 8, 9, 9, 9, 9, 9, 7, 9, 8, 9, 9, 4, 9, 2, 3, 9, 8, 7, 6, 7, 8, 9, 9, 8, 9, 7, 7, 8, 9, 8, 9, 8, 9, 9, 9, 7, 6, 5, 6, 9, 9, 9, 3, 2, 9, 8, 9, 8, 9},
        {3, 4, 5, 8, 9, 1, 0, 9, 9, 7, 6, 7, 6, 7, 8, 9, 8, 9, 9, 8, 7, 6, 9, 8, 9, 2, 1, 2, 9, 8, 7, 6, 7, 6, 8, 9, 9, 6, 5, 6, 4, 3, 2, 3, 4, 6, 7, 8, 9, 9, 8, 7, 8, 8, 9, 8, 8, 6, 9, 7, 9, 8, 9, 8, 9, 4, 9, 9, 6, 5, 6, 7, 9, 9, 9, 9, 8, 9, 9, 9, 9, 8, 9, 9, 8, 6, 6, 5, 4, 7, 8, 9, 8, 9, 9, 8, 7, 8, 9, 7},
        {4, 5, 6, 7, 8, 9, 9, 9, 9, 8, 7, 8, 7, 8, 9, 5, 7, 9, 8, 7, 6, 5, 6, 7, 8, 9, 2, 3, 5, 9, 8, 7, 8, 9, 9, 9, 8, 7, 8, 9, 5, 4, 5, 4, 9, 7, 8, 9, 9, 9, 9, 6, 7, 7, 9, 7, 6, 5, 7, 6, 5, 7, 8, 7, 8, 9, 8, 7, 6, 4, 5, 6, 7, 8, 7, 8, 9, 2, 1, 9, 8, 7, 9, 9, 9, 5, 4, 3, 2, 8, 9, 5, 6, 7, 9, 7, 6, 5, 4, 6},
        {6, 8, 7, 8, 9, 7, 8, 9, 9, 9, 8, 9, 8, 9, 3, 4, 9, 8, 9, 8, 9, 4, 5, 6, 9, 6, 5, 4, 5, 8, 9, 8, 9, 0, 2, 4, 9, 8, 9, 9, 8, 7, 6, 5, 6, 9, 9, 9, 9, 8, 8, 4, 5, 6, 8, 9, 5, 4, 6, 5, 4, 6, 5, 6, 9, 8, 9, 8, 4, 3, 4, 5, 8, 9, 6, 7, 8, 9, 9, 8, 7, 6, 9, 9, 8, 9, 9, 2, 1, 2, 3, 4, 5, 8, 9, 9, 7, 9, 9, 7},
        {7, 9, 8, 9, 5, 6, 9, 8, 9, 9, 9, 1, 9, 1, 2, 9, 8, 7, 8, 9, 8, 9, 6, 7, 8, 9, 7, 9, 6, 7, 8, 9, 3, 1, 2, 3, 9, 9, 6, 4, 9, 9, 8, 9, 7, 8, 9, 9, 8, 7, 6, 3, 4, 7, 7, 9, 4, 3, 2, 1, 2, 3, 4, 9, 8, 7, 9, 9, 3, 2, 1, 2, 3, 4, 5, 8, 9, 9, 8, 7, 6, 5, 8, 7, 6, 7, 8, 9, 0, 1, 2, 5, 6, 7, 9, 1, 9, 9, 8, 9},
        {8, 9, 9, 1, 3, 5, 6, 7, 7, 9, 9, 0, 9, 0, 1, 9, 7, 6, 7, 6, 7, 8, 9, 8, 9, 9, 8, 9, 8, 9, 9, 8, 4, 2, 4, 9, 8, 6, 4, 3, 2, 3, 9, 9, 8, 9, 9, 8, 7, 5, 4, 2, 3, 5, 6, 7, 9, 9, 3, 0, 2, 3, 4, 5, 9, 6, 5, 4, 3, 1, 0, 1, 4, 5, 6, 8, 9, 1, 9, 9, 5, 4, 3, 4, 5, 6, 9, 2, 1, 3, 9, 8, 9, 8, 9, 2, 9, 8, 7, 9},
        {9, 4, 1, 0, 1, 2, 4, 5, 6, 7, 8, 9, 8, 9, 9, 8, 6, 5, 4, 5, 6, 7, 8, 9, 1, 2, 9, 4, 9, 9, 8, 7, 5, 3, 6, 7, 9, 6, 5, 4, 1, 3, 4, 6, 9, 9, 8, 7, 6, 5, 2, 1, 2, 4, 5, 6, 7, 8, 9, 1, 3, 4, 5, 9, 8, 7, 6, 4, 3, 2, 3, 2, 3, 5, 8, 9, 1, 0, 9, 7, 6, 5, 4, 5, 7, 7, 8, 9, 2, 5, 6, 7, 9, 9, 5, 9, 8, 7, 6, 7},
        {4, 3, 2, 1, 2, 6, 7, 8, 9, 8, 9, 8, 7, 5, 4, 9, 8, 7, 6, 8, 9, 9, 9, 1, 0, 1, 2, 3, 9, 8, 7, 6, 5, 4, 5, 9, 8, 7, 6, 3, 2, 4, 5, 6, 9, 8, 7, 7, 6, 4, 1, 0, 2, 3, 4, 5, 6, 9, 8, 6, 5, 5, 6, 7, 9, 9, 7, 9, 4, 3, 4, 3, 4, 5, 7, 8, 9, 9, 9, 9, 8, 8, 7, 6, 7, 8, 9, 9, 7, 6, 7, 8, 9, 5, 3, 4, 9, 6, 5, 4},
        {6, 5, 3, 2, 3, 5, 6, 7, 8, 9, 8, 7, 6, 4, 3, 4, 9, 8, 7, 8, 9, 8, 9, 4, 3, 2, 3, 5, 6, 9, 8, 7, 6, 5, 6, 7, 9, 8, 5, 4, 6, 5, 9, 9, 8, 7, 6, 5, 4, 3, 2, 1, 3, 4, 5, 6, 7, 8, 9, 7, 6, 7, 7, 8, 9, 9, 9, 8, 9, 4, 5, 6, 5, 6, 8, 9, 9, 8, 9, 9, 9, 9, 8, 7, 8, 9, 4, 9, 8, 7, 8, 9, 4, 3, 2, 9, 8, 7, 6, 5},
        {7, 6, 5, 6, 4, 6, 7, 8, 9, 3, 9, 8, 7, 5, 4, 5, 9, 9, 8, 9, 6, 7, 8, 9, 6, 5, 4, 5, 6, 9, 9, 8, 8, 7, 9, 9, 8, 7, 6, 7, 9, 9, 8, 9, 9, 8, 7, 6, 5, 4, 3, 2, 4, 5, 6, 8, 8, 9, 9, 8, 8, 9, 9, 9, 9, 9, 8, 7, 8, 9, 6, 8, 9, 7, 8, 9, 8, 7, 8, 9, 8, 9, 9, 9, 9, 4, 3, 2, 9, 8, 9, 7, 5, 2, 1, 2, 9, 9, 7, 6},
        {8, 7, 6, 7, 5, 8, 9, 9, 5, 4, 8, 9, 9, 7, 5, 6, 8, 9, 9, 4, 5, 9, 9, 8, 7, 7, 5, 6, 9, 8, 9, 9, 9, 8, 9, 1, 9, 8, 7, 9, 8, 9, 7, 8, 9, 9, 8, 7, 6, 5, 4, 8, 6, 6, 8, 9, 9, 4, 5, 9, 9, 9, 8, 9, 9, 8, 7, 6, 7, 8, 9, 9, 9, 8, 9, 8, 7, 6, 9, 8, 7, 8, 9, 9, 7, 6, 4, 3, 4, 9, 6, 5, 4, 3, 2, 3, 4, 9, 8, 8},
        {9, 8, 7, 9, 6, 7, 8, 9, 7, 5, 7, 9, 8, 9, 6, 7, 9, 8, 7, 5, 9, 8, 9, 9, 9, 8, 9, 9, 8, 7, 8, 9, 5, 9, 1, 0, 2, 9, 9, 8, 7, 6, 6, 9, 9, 9, 9, 8, 8, 7, 6, 7, 8, 9, 9, 1, 2, 3, 6, 7, 8, 9, 7, 8, 9, 8, 6, 5, 6, 7, 8, 9, 4, 9, 8, 7, 6, 5, 3, 9, 6, 7, 8, 9, 8, 7, 6, 5, 7, 8, 9, 7, 5, 9, 4, 4, 9, 9, 9, 9},
        {2, 9, 8, 9, 7, 8, 9, 9, 9, 6, 9, 8, 7, 8, 9, 8, 9, 9, 8, 9, 8, 7, 8, 9, 9, 9, 5, 4, 9, 6, 9, 6, 4, 3, 2, 1, 3, 4, 5, 9, 9, 4, 5, 7, 8, 9, 7, 9, 9, 8, 7, 8, 9, 4, 3, 2, 3, 9, 9, 8, 9, 8, 6, 5, 4, 5, 4, 4, 7, 8, 9, 2, 3, 9, 8, 6, 5, 4, 2, 6, 5, 6, 9, 4, 9, 8, 9, 6, 8, 9, 9, 8, 9, 8, 9, 9, 8, 9, 3, 1},
        {1, 2, 9, 9, 8, 9, 9, 9, 8, 9, 7, 7, 6, 9, 9, 9, 1, 2, 9, 9, 7, 6, 8, 9, 9, 7, 6, 9, 8, 7, 8, 9, 6, 5, 4, 2, 5, 6, 7, 8, 9, 9, 6, 9, 9, 9, 6, 5, 6, 9, 8, 9, 9, 6, 5, 3, 9, 8, 7, 9, 8, 7, 5, 4, 3, 4, 2, 3, 4, 9, 4, 3, 5, 9, 6, 5, 4, 2, 1, 2, 4, 8, 9, 5, 6, 9, 9, 7, 8, 9, 9, 9, 8, 7, 6, 8, 7, 8, 9, 9},
        {0, 4, 6, 7, 9, 9, 9, 8, 7, 6, 5, 4, 5, 7, 8, 9, 0, 9, 8, 8, 6, 5, 6, 8, 9, 8, 7, 9, 9, 8, 9, 8, 7, 6, 5, 6, 6, 7, 8, 9, 9, 8, 7, 8, 9, 8, 7, 6, 8, 9, 9, 7, 8, 9, 7, 9, 8, 7, 6, 5, 9, 9, 8, 3, 2, 1, 0, 4, 5, 6, 9, 4, 9, 8, 7, 8, 5, 4, 3, 3, 6, 7, 8, 9, 9, 8, 9, 8, 9, 9, 9, 8, 7, 6, 5, 4, 6, 7, 9, 7},
        {2, 3, 7, 8, 9, 8, 8, 9, 6, 5, 4, 3, 4, 6, 7, 8, 9, 8, 7, 6, 7, 4, 7, 7, 8, 9, 9, 8, 9, 9, 9, 9, 9, 8, 9, 8, 7, 8, 9, 3, 5, 9, 8, 9, 9, 9, 8, 7, 9, 8, 7, 6, 7, 9, 8, 9, 6, 5, 4, 3, 4, 9, 7, 5, 6, 7, 2, 5, 6, 9, 8, 9, 8, 9, 8, 7, 6, 6, 5, 4, 5, 6, 7, 8, 9, 7, 8, 9, 9, 9, 8, 6, 9, 5, 4, 3, 5, 8, 9, 6},
        {4, 4, 9, 9, 8, 7, 7, 9, 9, 4, 3, 2, 3, 5, 6, 9, 8, 7, 6, 5, 2, 3, 4, 6, 7, 8, 9, 7, 9, 8, 8, 9, 9, 9, 9, 9, 9, 9, 1, 2, 4, 5, 9, 9, 9, 9, 9, 8, 9, 9, 6, 5, 6, 8, 9, 8, 9, 6, 3, 2, 3, 4, 9, 7, 8, 8, 3, 4, 7, 9, 7, 6, 7, 9, 9, 9, 7, 8, 7, 5, 7, 8, 9, 9, 5, 6, 7, 9, 8, 7, 6, 5, 6, 4, 3, 2, 6, 3, 4, 5},
        {9, 9, 8, 7, 6, 5, 6, 7, 8, 9, 2, 1, 2, 4, 8, 9, 9, 8, 6, 3, 1, 3, 5, 6, 8, 9, 6, 6, 7, 6, 7, 8, 9, 7, 8, 9, 9, 1, 0, 6, 5, 9, 8, 9, 8, 9, 9, 9, 9, 9, 8, 4, 8, 7, 8, 7, 8, 9, 2, 1, 2, 5, 9, 8, 9, 6, 5, 9, 9, 8, 9, 5, 6, 7, 9, 9, 8, 9, 8, 9, 8, 9, 6, 6, 4, 8, 6, 8, 9, 7, 5, 4, 3, 2, 1, 0, 1, 2, 3, 4},
        {8, 7, 9, 8, 8, 7, 8, 9, 9, 4, 3, 2, 3, 4, 7, 8, 9, 6, 5, 4, 2, 3, 4, 5, 9, 9, 5, 4, 4, 5, 6, 9, 8, 6, 7, 9, 8, 9, 1, 9, 9, 8, 7, 6, 7, 8, 9, 9, 9, 8, 7, 3, 1, 6, 5, 6, 7, 8, 9, 4, 3, 6, 7, 9, 8, 7, 9, 8, 7, 6, 5, 4, 5, 6, 8, 9, 9, 3, 9, 9, 9, 6, 5, 4, 3, 4, 5, 9, 8, 7, 6, 8, 7, 5, 2, 1, 2, 3, 4, 5},
        {9, 6, 5, 9, 9, 8, 9, 7, 6, 5, 4, 3, 4, 5, 6, 8, 9, 7, 6, 7, 9, 6, 5, 6, 7, 8, 9, 3, 2, 9, 9, 7, 6, 5, 9, 8, 7, 8, 9, 8, 7, 6, 5, 5, 6, 9, 8, 9, 8, 7, 6, 2, 0, 5, 4, 5, 6, 7, 8, 9, 4, 5, 7, 8, 9, 9, 8, 7, 6, 5, 4, 3, 4, 6, 9, 6, 5, 4, 9, 9, 8, 7, 6, 5, 4, 6, 6, 7, 9, 9, 8, 9, 9, 4, 3, 2, 3, 4, 7, 6},
        {8, 9, 3, 4, 5, 9, 9, 8, 7, 9, 8, 7, 6, 8, 9, 9, 9, 9, 7, 8, 9, 8, 8, 7, 9, 9, 5, 4, 9, 8, 7, 6, 5, 4, 4, 9, 6, 9, 8, 7, 6, 5, 4, 3, 4, 6, 7, 8, 9, 9, 4, 3, 1, 2, 3, 4, 8, 9, 9, 6, 5, 6, 7, 9, 5, 3, 9, 8, 5, 4, 3, 2, 3, 5, 8, 9, 9, 9, 8, 9, 9, 8, 7, 6, 7, 8, 9, 8, 9, 8, 9, 8, 8, 9, 4, 5, 6, 5, 6, 7},
        {7, 8, 9, 5, 6, 7, 8, 9, 9, 8, 9, 8, 7, 8, 9, 9, 9, 9, 8, 9, 9, 9, 9, 9, 8, 7, 6, 9, 8, 7, 6, 5, 4, 3, 3, 4, 5, 7, 9, 8, 7, 6, 5, 7, 6, 7, 8, 9, 8, 8, 9, 4, 3, 4, 4, 5, 6, 7, 8, 9, 6, 7, 8, 9, 3, 2, 9, 8, 7, 5, 4, 3, 4, 5, 6, 7, 8, 9, 7, 6, 8, 9, 9, 9, 8, 9, 9, 9, 8, 7, 8, 7, 7, 8, 9, 6, 7, 6, 7, 8},
        {6, 7, 9, 6, 9, 8, 9, 9, 8, 7, 6, 9, 8, 9, 6, 9, 7, 9, 9, 9, 9, 8, 7, 8, 9, 8, 7, 8, 9, 9, 8, 6, 3, 2, 1, 3, 4, 8, 9, 9, 8, 7, 8, 9, 9, 8, 9, 4, 6, 7, 9, 9, 4, 6, 5, 6, 7, 9, 9, 8, 7, 8, 9, 8, 9, 1, 9, 9, 8, 7, 6, 4, 5, 6, 7, 9, 9, 7, 6, 5, 7, 8, 9, 9, 9, 0, 9, 8, 7, 6, 7, 6, 6, 9, 8, 9, 8, 7, 9, 9},
        {5, 7, 8, 9, 9, 9, 5, 7, 9, 9, 5, 4, 9, 3, 4, 7, 6, 8, 9, 9, 8, 7, 6, 7, 8, 9, 9, 9, 9, 8, 6, 7, 2, 1, 0, 2, 3, 9, 9, 9, 9, 9, 9, 7, 6, 9, 4, 3, 4, 8, 7, 8, 9, 8, 7, 9, 8, 9, 9, 9, 8, 9, 6, 7, 8, 9, 8, 9, 9, 8, 7, 6, 7, 9, 8, 9, 7, 8, 7, 4, 5, 9, 9, 8, 9, 2, 9, 8, 6, 5, 3, 4, 5, 6, 7, 8, 9, 9, 1, 0},
        {4, 5, 6, 7, 8, 9, 4, 6, 9, 8, 4, 3, 2, 1, 3, 4, 5, 6, 7, 9, 8, 8, 5, 6, 6, 7, 8, 9, 8, 7, 5, 4, 3, 2, 3, 3, 5, 6, 9, 8, 7, 9, 8, 6, 5, 3, 2, 1, 2, 9, 6, 7, 9, 9, 9, 9, 9, 7, 8, 5, 9, 4, 5, 6, 9, 8, 7, 6, 7, 9, 8, 7, 8, 9, 9, 8, 6, 4, 3, 2, 1, 2, 5, 7, 8, 9, 8, 7, 8, 3, 2, 3, 4, 5, 6, 7, 9, 8, 9, 1},
        {3, 7, 7, 9, 9, 9, 2, 9, 7, 6, 5, 5, 3, 2, 3, 5, 6, 7, 9, 9, 7, 7, 4, 5, 5, 6, 9, 8, 9, 9, 8, 7, 6, 5, 4, 8, 7, 9, 8, 7, 6, 8, 9, 8, 6, 4, 3, 4, 3, 4, 5, 8, 9, 9, 9, 8, 7, 6, 5, 4, 3, 2, 3, 7, 8, 9, 7, 5, 6, 9, 9, 8, 9, 7, 9, 7, 6, 5, 2, 1, 0, 1, 4, 5, 9, 8, 7, 6, 5, 4, 3, 4, 5, 6, 7, 8, 9, 7, 8, 9},
        {9, 8, 8, 9, 6, 8, 9, 9, 8, 7, 6, 6, 4, 3, 4, 6, 7, 9, 8, 7, 6, 5, 3, 2, 3, 4, 5, 6, 7, 8, 9, 8, 8, 7, 5, 6, 9, 8, 7, 6, 5, 9, 8, 7, 6, 5, 4, 5, 4, 5, 6, 9, 9, 8, 6, 9, 8, 7, 6, 5, 2, 1, 4, 5, 7, 8, 9, 6, 9, 8, 7, 9, 5, 6, 9, 8, 7, 6, 8, 8, 9, 2, 3, 6, 8, 9, 8, 7, 9, 5, 6, 5, 6, 7, 8, 9, 5, 6, 7, 8},
        {4, 9, 9, 4, 5, 6, 7, 8, 9, 9, 8, 6, 5, 4, 5, 7, 9, 9, 9, 9, 7, 4, 3, 1, 3, 3, 4, 5, 6, 9, 9, 9, 9, 8, 7, 9, 8, 7, 6, 5, 4, 3, 9, 8, 7, 9, 8, 7, 5, 6, 7, 8, 9, 5, 5, 6, 9, 8, 7, 6, 7, 2, 3, 4, 9, 9, 9, 9, 8, 7, 6, 5, 4, 2, 2, 9, 8, 7, 8, 7, 6, 5, 4, 5, 6, 7, 9, 9, 7, 6, 7, 8, 7, 8, 9, 3, 4, 5, 8, 9},
        {2, 1, 2, 3, 4, 5, 6, 9, 9, 9, 8, 7, 6, 5, 6, 7, 8, 9, 9, 8, 7, 5, 1, 0, 1, 2, 5, 6, 7, 8, 9, 1, 0, 9, 9, 9, 9, 9, 8, 4, 3, 2, 1, 9, 8, 9, 9, 8, 9, 8, 9, 9, 5, 4, 3, 2, 4, 9, 8, 7, 8, 9, 4, 5, 6, 7, 8, 9, 9, 6, 5, 4, 2, 1, 0, 1, 9, 8, 9, 8, 7, 7, 6, 6, 7, 8, 9, 9, 8, 7, 8, 9, 8, 9, 1, 2, 3, 6, 9, 9},
};
#endif //DAY9_DATA_PART_1_HPP
