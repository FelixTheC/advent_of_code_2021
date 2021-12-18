//
// Created by felix on 18.12.21.
//

#ifndef DAY10_PART_TWO_HPP
#define DAY10_PART_TWO_HPP

#include <iterator>
#include "utils.hpp"

unsigned long long calculate_result(std::vector<char> &missing_chars)
{
    unsigned long long score = 0;
    std::reverse(missing_chars.begin(), missing_chars.end());

    for (auto val: missing_chars)
    {
        score *= 5;
        score += point_by_char_second[val];
    }

    return score;
}

unsigned long long middle_score(std::vector<unsigned long long> &scores)
{
    std::sort(scores.begin(), scores.end());
    unsigned long long middle = scores.size() / 2;

    return scores[middle];
}

void part_two(std::ifstream &file)
{
    std::string line;
    std::vector<unsigned long long> results;

    while (getline(file, line))
    {
        bool ignore_line = false;
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
                    ignore_line = true;
                    break;
                }
            }
        }
        if (!ignore_line)
        {
            results.push_back(calculate_result(tmp));
        }
    }

    std::cout << middle_score(results) << std::endl;
}

#endif //DAY10_PART_TWO_HPP
