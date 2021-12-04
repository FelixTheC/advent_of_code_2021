//
// Created by felix on 04.12.21.
//

#include "BingoBoard.hpp"


BingoBoard::BingoBoard(const std::vector<std::vector<int>> &board)
{
    std::for_each(board.cbegin(), board.cend(),
                  [&](const std::vector<int> &row)
                  {
                      row_vector tmp;
                      std::for_each(row.cbegin(), row.cend(),
                                    [&tmp](const int &val)
                                    {
                                        tmp.emplace_back(std::pair(val, false));
                                    });
                      _board.emplace_back(tmp);
                  });
}

void BingoBoard::set_number(const int &number)
{
    if (!board_done)
    {
        ++numbers_used;
        std::for_each(_board.begin(), _board.end(),
                      [&](row_vector &row)
                      {
                          std::for_each(row.begin(), row.end(),
                                        [&](std::pair<int, bool> &val)
                                        {
                                            if (val.first == number)
                                            {
                                                val.second = true;
                                            }
                                        });
                      });
    }
}

int BingoBoard::score(int number)
{
    int unmarked_sum = 0;
    std::for_each(_board.cbegin(), _board.cend(),
                  [&unmarked_sum](const row_vector &row)
                  {
                      std::for_each(row.cbegin(), row.cend(),
                                    [&unmarked_sum](const std::pair<int, bool> &val)
                                    {
                                        if (!val.second)
                                            unmarked_sum += val.first;
                                    });
                  });

    return unmarked_sum * number;
}

void BingoBoard::display()
{
    std::for_each(_board.cbegin(), _board.cend(),
                  [](const row_vector &row)
                  {
                      std::for_each(row.cbegin(), row.cend(),
                                    [](const std::pair<int, bool> &val)
                                    {
                                        if (val.second)
                                            std::cout << val.first << "x ";
                                        else
                                            std::cout << val.first << "o ";
                                    });
                      std::cout << "\n";
                  });
}

bool BingoBoard::won()
{
    bool won_ = false;

    // check if we have 5 in a row
    std::for_each(_board.cbegin(), _board.cend(),
                  [&](const row_vector &row)
                  {
                      int match = 0;
                      std::for_each(row.cbegin(), row.cend(),
                                    [&](const std::pair<int, bool> &val)
                                    { if (val.second) ++match; });
                      if (match == COLUMN_SIZE)
                          won_ = true;
                  });

    // check if we have 5 in a column
    if (!won_)
    {
        for (int column = 0; column < COLUMN_SIZE; ++column)
        {
            int match = 0;
            std::for_each(_board.cbegin(), _board.cend(),
                          [&](const row_vector &row)
                          { if (row[column].second) ++match; });
            if (match == COLUMN_SIZE)
                won_ = true;
        }
    }

    if (won_)
        board_done = true;
    return won_;
}

bool BingoBoard::board_is_done()
{
    return board_done;
}

void BingoBoard::set_final_score(int number)
{
    final_score = number;
}

int BingoBoard::get_final_score()
{
    return final_score;
}

int BingoBoard::get_used_numbers()
{
    return numbers_used;
}
