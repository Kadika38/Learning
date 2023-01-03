#include <iostream>
#include <vector>
#include "tttfuncs.hpp"

int main() {
  int winner;

  //intro
  intro();
  //turns
    //eval for win or tie
  winner = play();
  //conclusion
  if (winner > 0) {
    std::cout << "Player " << winner << " wins!";
  } else {
    std::cout << "Draw!";
  }
}