//
//  Game.hpp
//  TicTacToe
//
//  Created by Alex Neville on 10/30/25.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>

class Game
{
public:
    Game();
    void start();
    bool gameLoop();
private:
    void play();
};

#endif /* Game_hpp */
