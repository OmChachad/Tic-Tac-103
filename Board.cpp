#include "Board.hpp"
#include <iostream>

Board::Board() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j].mark = ' ';
        }
    }
}

Player Board::checkForWinner() {
    Player none;
    none.mark = ' ';
    return none;
}

void Board::printBoard() {
    std::cout << "-------------------\n";
    for (int i = 0; i < 3; i++) {
        std::cout << "|     |     |     |\n";
        std::cout << "|";
        for (int j = 0; j < 3; j++) {
            std::cout << "  " << board[i][j].mark << "  |";
        }

        std::cout << "\n|     |     |     |\n";
        std::cout << "-------------------\n";
    }
}
