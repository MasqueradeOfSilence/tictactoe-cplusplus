//
//  Game.cpp
//  TicTacToe
//
//  Created by Alex Neville on 10/30/25.
//

#include "Game.hpp"
#include <iostream>

Game::Game()
{
    std::cout << "Creating Game object!" << std::endl;
}

bool Game::gameLoop()
{
    std::cout << "Make a move: " << std::endl;
    // They will need a visual of the grid and a place to put the move
    // abstract out so we can add a gui later
    // q to quit at any time
    std::string input;
    std::cin >> input;
    char selection = std::tolower(input.at(0));
    if (selection == 'q')
    {
        return false;
    }
    return true;
}

void Game::start()
{
    std::cout << "It's playtime bby! Game start! (apatapateh)" << std::endl;
    // todo: quitting doesn't actually exit the whole program. 
    play();
}

void Game::play()
{
    bool play = true;
    while (play)
    {
        play = gameLoop();
    }
}
