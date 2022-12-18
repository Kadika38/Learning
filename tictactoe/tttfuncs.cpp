#include <iostream>
#include <vector>

void intro() {
  std::cout << "Welcome to tic tac toe!\n";

  std::cout << "    A   B   C\n";
  std::cout << "  ____________\n";
  std::cout << "1 |   |   |   | 1\n";
  std::cout << "  ____________\n";
  std::cout << "2 |   |   |   | 2\n";
  std::cout << "  ____________\n";
  std::cout << "3 |   |   |   | 3\n";
  std::cout << "  ____________\n";
  std::cout << "    A   B   C\n";
}

std::string board_eval(int who) {
  if (who == 0) {
    return " ";
  } else if (who == 1) {
    return "X";
  } else {
    return "O";
  }
}

void board(std::vector<int> b) {
  std::cout << "    A   B   C\n";
  std::cout << "  ____________\n";

  std::cout << "1 | " << board_eval(b[0]) << " | " << board_eval(b[1]) << " | " << board_eval(b[2]) << " | 1\n";

  std::cout << "  ____________\n";

  std::cout << "2 | " << board_eval(b[3]) << " | " << board_eval(b[4]) << " | " << board_eval(b[5]) << " | 2\n";

  std::cout << "  ____________\n";

  std::cout << "3 | " << board_eval(b[6]) << " | " << board_eval(b[7]) << " | " << board_eval(b[8]) << " | 3\n";

  std::cout << "  ____________\n";
  std::cout << "    A   B   C\n";
}

int translate_move(std::string move) {
  if (move[0] == "A" || move[0] == "a") {
    if (move[1] == "1") {
      return 0;
    } else if (move[1] == "2") {
      return 3;
    } else if (move[1] == "3") {
      return 6;
    }
  } else if (move[0] == "B" || move[0] == "b") {
    if (move[1] == "1") {
      return 1;
    } else if (move[1] == "2") {
      return 4;
    } else if (move[1] == "3") {
      return 7;
    }
  } else if (move[0] == "C" || move[0] == "c") {
    if (move[1] == "1") {
      return 2;
    } else if (move[1] == "2") {
      return 5;
    } else if (move[1] == "3") {
      return 8;
    }
  } else {
    return 9; //this would indicate an error, probably incorrect input
  }
}

int play() {
  std::vector<int> b = [0, 0, 0, 0, 0, 0, 0, 0, 0];
  std::string p1;
  std::string p2;

  std::cout << "Player 1, enter your next move: ";
  std::cin >> p1;

}