//
//  main.cpp
//  TicTacToe
//
//  Created by Alex Neville on 10/24/25.
//

#include <iostream>
#include <string>
#include "Game.hpp"

int main(int argc, const char * argv[])
{
    std::cout << "Hello, Tic Tac Toe!\n";
    std::cout << "Use S to start a game, Q to quit, and T to terminate the program." << std::endl;
    // PLAY LOOP
    while (true)
    {
        std::cout << "Pick your poison: " << std::endl;
        std::string input;
        std::cin >> input;
        char selection = std::tolower(input.at(0));
        Game game;
        bool keep_going = true;
        switch (selection)
        {
            case 's':
                std::cout << "Starting game. Ready to die?" << std::endl;
                keep_going = game.start();
                if (!keep_going)
                {
                    return EXIT_SUCCESS;
                }
                break;
            case 'q':
                std::cout << "Quitting game" << std::endl;
                break;
            case 't':
                std::cout << "Terminating program. BYE FELICIA" << std::endl;
                return EXIT_SUCCESS;
            case 'n':
                std::cout << "GIVE ME SOMETHING TO BELIEVE IN, AS ALIVE AS YOU NEED ME TO BE" << std::endl;
                std::cout << "yeah try again pls" << std::endl;
                break;
            default:
                std::cout << "lmao what? try again" << std::endl;
                std::cout << "I don't speak whatever-the-f-that-is-anese" << std::endl;
                break;
        }
    }
    
    return EXIT_SUCCESS;
}
