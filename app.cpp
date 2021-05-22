#include "app_functions.hpp"
#include <iostream>
#include <vector>

int main() {

  welcome();

  std::vector<int> grid = {0, 1, 2, 3, 4, 5, 6, 7, 8};
  create_board();

  // Play again bool
  bool play_again = true;

  int player_1;
  int player_2;

  while (play_again) {

    if (first_move() == true) {
      std::cout << "\nPlayer 1, pick a number on the board.\n";
      std::cin >> player_1;
    } else {
      std::cout << "\nPlayer2, pick a number on the board.\n";
      std::cin >> player_2;
    }
  }
}