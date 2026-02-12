#include <iostream>
#include "printBoard.h"


void printBoard() {
    std::cout << "=========Mastermind=========\n\n";

    std::cout << "Colors:\n";

    std::cout << "R = Red\tG = Green\tB = Blue\n";
    std::cout << "Y = Yellow\tW = White\tP = Purple\n\n";

    std::cout << "---------------------------------------\n";

    for (int row = 0; row < 10; row++) {
        std::cout << "| ";

        for (int col = 0; col < 4; col++) {
            std::cout << "[] ";

        }

        std::cout << "| ";


        for (int peg = 0; peg < 4; peg++) {
            std::cout << "o ";
        }

        std::cout << "|\n";

    }

    std::cout << "-----------------------------------------\n";
}


