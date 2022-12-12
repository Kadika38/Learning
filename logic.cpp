#include <iostream>
#include <stdlib.h>

int main() {

  srand(time(NULL));

  int computer = rand() % 3 + 1;

  int user = 0;

  std::cout << "====================\n" << "rock paper scissors!\n" << "====================\n" << "1) Rock\n" << "2) Paper\n" << "3) Scissors\n" << "shoot! ";
  std::cin >> user;

  if (user == 1) {
    if (computer == 1) {
      std::cout << "Tie!\n";
    } else if (computer == 2) {
      std::cout << "You lose!\n";
    } else if (computer == 3) {
      std::cout << "You win!\n";
    }
  } else if (user == 2) {
      if (computer == 1) {
        std::cout << "You win!\n";
      } else if (computer == 2) {
        std::cout << "Tie!\n";
      } else if (computer == 3) {
        std::cout << "You lose!\n";
      }
  } else if (user = 3) {
      if (computer == 1) {
        std::cout << "You lose!\n";
      } else if (computer == 2) {
        std::cout << "You win!\n";
      } else if (computer == 3) {
        std::cout << "Tie!\n";
      }
  }
}