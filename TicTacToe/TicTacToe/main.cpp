//
//  main.cpp
//  TicTacToe
//
//  Created by Alex Neville on 10/24/25.
//

#include <iostream>
#include <string>

int main(int argc, const char * argv[])
{
    std::cout << "Hello, Tic Tac Toe!\n";
    std::cout << "Use S to start a game, Q to quit, and T to terminate the program." << std::endl;
    // Note: decide whether or not to move into an object
    while (true)
    {
        std::cout << "Pick your poison: " << std::endl;
        std::string input;
        std::cin >> input;
        char selection = std::tolower(input.at(0));
        switch (selection)
        {
            case 's':
                std::cout << "Starting game. Ready to die?" << std::endl;
                break;
            case 'q':
                std::cout << "Quitting game" << std::endl;
                break;
            case 't':
                std::cout << "Terminating program. BYE FELICIA" << std::endl;
                return EXIT_SUCCESS;
                break;
            case 'n':
                std::cout << "GIVE ME SOMETHING TO BELIEVE IN, AS ALIVE AS YOU NEED ME TO BE" << std::endl;
                break;
            default:
                std::cout << "lmao what? try again" << std::endl;
                break;
        }
    }
    
    return EXIT_SUCCESS;
}
