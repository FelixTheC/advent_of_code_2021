//
// Created by felix on 18.12.21.
//

#ifndef DAY10_UTILS_HPP
#define DAY10_UTILS_HPP

#include <map>
#include <vector>

const std::vector<char> open_chars = {'(', '{', '[', '<'};
std::map<char, char> closing_chars = {{')', '('},
                                      {'}', '{'},
                                      {']', '['},
                                      {'>', '<'}};

std::map<char, unsigned short> point_by_char = {{')', 3},
                                                {']', 57},
                                                {'}', 1197},
                                                {'>', 25137}};

std::map<char, unsigned short> point_by_char_second = {{'(', 1},
                                                       {'[', 2},
                                                       {'{', 3},
                                                       {'<', 4}};

#endif //DAY10_UTILS_HPP
