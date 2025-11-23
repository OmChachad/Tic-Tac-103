#pragma once
#include "Player.hpp"

class Board {
public:
    Player board[3][3];

    Board();

    Player checkForWinner();
    void printBoard();
};
