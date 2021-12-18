//
// Created by felix on 18.12.21.
//

#ifndef DAY10_PART_ONE_HPP
#define DAY10_PART_ONE_HPP

#include <queue>
#include "utils.hpp"

void part_one(std::ifstream &file)
{
    std::string line;
    int errors = 0;
    std::queue<int> broken_lines;

    while (getline(file, line))
    {
        std::vector<char> tmp;
        for (const char c : line)
        {
            auto is_open_char = std::find(open_chars.begin(), open_chars.end(), c);
            if (is_open_char != open_chars.end())
            {
                tmp.emplace_back(c);
            }
            else
            {
                if (tmp.at(tmp.size() - 1) == closing_chars[c])
                {
                    tmp.pop_back();
                }
                else
                {
                    errors += point_by_char[c];
                    break;
                }
            }
        }
    }

    std::cout << "errors: " << errors << std::endl;
}

#endif //DAY10_PART_ONE_HPP
