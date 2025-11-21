#include <iostream>
#include <string>

enum PlayerType {
    user, computer
};

struct Player {
    std::string name;
    PlayerType type;
    char mark;
};