#include "app_functions.hpp"
#include <iostream>
#include <vector>

void welcome() {
  std::cout << "===========\n";
  std::cout << "Tic Tac Toe\n";
  std::cout << "===========\n\n";

  std::cout << "It's simple, get three in a row and you win!\n\n";
}

std::vector<int> grid = {0, 1, 2, 3, 4, 5, 6, 7, 8};

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

bool first_move() {

  std::cout << "\nWho will go first?\n";
  std::cout << "'1', for player 1.\n";
  std::cout << "'2', for player 2.\n";

  char answer;
  std::cin >> answer;

  if (answer == '1') {

    return true;
    
  }
  return false;
  
}