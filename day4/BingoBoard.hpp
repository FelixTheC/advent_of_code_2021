//
// Created by felix on 04.12.21.
//

#ifndef DAY4_BINGOBOARD_HPP
#define DAY4_BINGOBOARD_HPP

#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

typedef std::vector<std::pair<int, bool>> row_vector;


class BingoBoard
{
private:
    const int COLUMN_SIZE = 5;
    std::vector<row_vector> _board;
    int numbers_used = 0;
    int final_score = 0;
    bool board_done = false;

public:
    BingoBoard(const std::vector<std::vector<int>> &board);

    ~BingoBoard() = default;

    void display();

    void set_number(const int &number);

    bool won();

    int score(int number);

    bool board_is_done();

    void set_final_score(int number);

    int get_final_score();

    int get_used_numbers();

    bool operator>(const BingoBoard &rhs) const
    {
        return (numbers_used < rhs.numbers_used);
    }

    bool operator<(const BingoBoard &rhs) const
    {
        return (numbers_used > rhs.numbers_used);
    }

    BingoBoard &operator=(const BingoBoard &rhs)
    {
        _board = rhs._board;
        numbers_used = rhs.numbers_used;
        final_score = rhs.final_score;
        board_done = rhs.board_done;

        return *this;
    }
};

#endif //DAY4_BINGOBOARD_HPP
