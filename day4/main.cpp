//
// Created by felix on 04.12.21.
//
#include <iostream>
#include <functional>

#include "input_numbers.hpp"
#include "BingoBoard.hpp"

int main()
{
    std::vector<BingoBoard> boards_vec;
    std::vector<BingoBoard> used_boards;

    std::for_each(bingo::BOARDS.cbegin(),
                  bingo::BOARDS.cend(),
                  [&boards_vec](const auto &board)
                  { boards_vec.emplace_back(BingoBoard(board)); });

    std::for_each(boards_vec.begin(), boards_vec.end(),
                  [&](BingoBoard &board)
                  {
                      std::for_each(bingo::BINGO_NUMBERS.cbegin(), bingo::BINGO_NUMBERS.cend(),
                                    [&](const int &number)
                                    {
                                        if (!board.board_is_done())
                                        {
                                            board.set_number(number);
                                            bool win = board.won();
                                            if (win)
                                                board.set_final_score(board.score(number));
                                        }
                                    });
                      used_boards.emplace_back(board);
                  });

    std::sort(used_boards.begin(), used_boards.end(), std::greater<BingoBoard>());

    std::cout << "Best: " << used_boards[0].get_final_score() << " " << used_boards[0].get_used_numbers();

    std::sort(used_boards.begin(), used_boards.end(), std::less<BingoBoard>());

    std::cout << "\n";
    std::cout << "Worst: " << used_boards[0].get_final_score() << " " << used_boards[0].get_used_numbers();

    return 0;
}
