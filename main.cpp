#include "Board.hpp"
using namespace std;

enum GameType {
    PvP,
    PvC
};

int main() {
    Board game;

    cout << "Would you like to play Player vs Player (0) or Player vs Computer (1)? ";
    int choice;
    cin >> choice;
    GameType gameType = (choice == 0) ? PvP : PvC;

    Player player1;
    player1.mark = 'X';
    Player player2;
    player2.mark = 'O';

    cout << "Enter Player X's name.\n";
    cin >> player1.name;

    switch(gameType) {
        case PvP: 
            cout << "Enter Player O's name.\n";
            cin >> player2.name;
        case PvC:
            player2.name = "Computer";
    }

    game.printBoard();
}
