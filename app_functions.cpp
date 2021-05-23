#include "app_functions.hpp"
#include <iostream>

std::string grid[9] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};
int player = 1;
int position = 0;

void welcome() {

  std::cout << "===========\n";
  std::cout << "Tic Tac Toe\n";
  std::cout << "===========\n\n";

  std::cout << "It's simple, get three in a row and you win!\n\n";
  std::cout << "This is how you will choose your positions!\n\n";

  std::cout << "     |     |      \n";
  std::cout << "  1  |  2  |  3   \n";
  std::cout << "_____|_____|_____ \n";
  std::cout << "     |     |      \n";
  std::cout << "  4  |  5  |  6   \n";
  std::cout << "_____|_____|_____ \n";
  std::cout << "     |     |      \n";
  std::cout << "  7  |  8  |  9   \n";
  std::cout << "     |     |      \n\n";
}

bool is_winner() {

  bool winner = false;

  // rows
  if ((grid[0] == grid[1]) && (grid[1] == grid[2]) && grid[0] != " ") {
    winner = true;
  } else if ((grid[3] == grid[4]) && (grid[3] == grid[5]) && grid[3] != " ") {
    winner = true;
  } else if ((grid[6] == grid[7]) && (grid[6] == grid[8]) && grid[6] != " ") {
    winner = true;
  }

  // columns
  else if ((grid[0] == grid[3]) && (grid[0] == grid[6]) && grid[0] != " ") {
    winner = true;
  } else if ((grid[1] == grid[4]) && (grid[1] == grid[7]) && grid[1] != " ") {
    winner = true;
  } else if ((grid[2] == grid[5]) && (grid[2] == grid[8]) && grid[2] != " ") {
    winner = true;
  }

  // diagonals
  else if ((grid[0] == grid[4]) && (grid[0] == grid[8]) && grid[0] != " ") {
    winner = true;
  } else if ((grid[2] == grid[4]) && (grid[2] == grid[6]) && grid[2] != " ") {
    winner = true;
  }

  return winner;
}

bool full_board() {

  bool full = true;

  for (int i = 0; i < 9; i++) {

    if (grid[1] == " ") {
      full = false;
    }
  }

  return full;
}

void create_grid() {

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

/* set position function using while loop, check if positon is a number.
Also check if position has already been chosen.  */
void change_position() {

  std::cout << "Player" << player << "'s turn. Enter 1-9: ";
  std::cout << " ";

  while (!(std::cin >> player)) {

    std::cout << "Please enter a valid number.\n";
    std::cin.clear();
    std::cin.ignore();
    
  }

  while (grid[position-1] != " ") {

    std::cout << "That space is taken!\n";
    std::cout << "Player " << player << "'s turn Enter 1-9: ";
    std::cout << "\n";
    std::cin >> position;
    
  }
  
}

void update_board() {

  if (player % 2 == 1) {

    grid[position - 1] = "x";

  }

  else {

    grid[position - 1] = "O";
  }
}

void change_player() {

  if (player == 1) {

    player ++;
    
  }
  
  else {

    player --;
    
  }

}

// Create take turn function

// Create end game function