#include "app_functions.hpp"
#include <iostream>
#include <array>

char grid[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
int player = 1;
int position = 0;

void welcome() {
  std::cout << "===========\n";
  std::cout << "Tic Tac Toe\n";
  std::cout << "===========\n\n";

  std::cout << "It's simple, get three in a row and you win!\n\n";
  std::cout << "This is how you will choose your positions!\n\n";

  std::cout << "     |     |      \n";
  std::cout << "  0  |  1  |  2   \n";
  std::cout << "_____|_____|_____ \n";
  std::cout << "     |     |      \n";
  std::cout << "  3  |  4  |  5   \n";
  std::cout << "_____|_____|_____ \n";
  std::cout << "     |     |      \n";
  std::cout << "  6  |  7  |  8   \n";
  std::cout << "     |     |      \n\n";
  
}


void create_board() {

  std::cout << "     |     |     \n";

  std::cout << "  " << grid[0] << "  |  " << grid[1] << "  |  " << grid[2]
            << "\n";

  std::cout << "-----|-----|----- \n";

  std::cout << "  " << grid[3] << "  |  " << grid[4] << "  |  " << grid[5]
            << "\n";

  std::cout << "-----|-----|----- \n";

  std::cout << "  " << grid[6] << "  |  " << grid[7] << "  |  " << grid[8]
            << "\n";

  std::cout << "     |     |     \n\n";
}
