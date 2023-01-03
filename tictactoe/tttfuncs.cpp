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

//helper func for board()
std::string board_eval(int who) {
  if (who == 0) {
    return " ";
  } else if (who == 1) {
    return "X";
  } else {
    return "O";
  }
}

//board() prints the board
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

//translate_move() takes the users input and returns the placement of their move within the vector
int translate_move(std::string move) {
  if (move[0] == 'A' || move[0] == 'a') {
    if (move[1] == '1') {
      return 0;
    } else if (move[1] == '2') {
      return 3;
    } else if (move[1] == '3') {
      return 6;
    }
  } else if (move[0] == 'B' || move[0] == 'b') {
    if (move[1] == '1') {
      return 1;
    } else if (move[1] == '2') {
      return 4;
    } else if (move[1] == '3') {
      return 7;
    }
  } else if (move[0] == 'C' || move[0] == 'c') {
    if (move[1] == '1') {
      return 2;
    } else if (move[1] == '2') {
      return 5;
    } else if (move[1] == '3') {
      return 8;
    }
  } else {
    return 9; //this would indicate an error, probably incorrect input
  }

  return 10; //weird error if it hits this
}

//turn() takes a players input and returns the newly modified board
std::vector<int> turn(std::vector<int> b, int player) {
  std::string move;

  std::cout << "Player " << player << ", enter your next move: ";
  std::cin >> move;

  b[translate_move(move)] = player;

  return b;
}

//win_eval() evaluates the board to check for a win, returns the winner, or 0 if no winner
int win_eval(std::vector<int> b) {
  if (b[0] == 1 || b[0] == 2) {
    if (b[1] == b[0] && b[2] == b[0]) {
      return b[0];
    } else if (b[3] == b[0] && b[6] == b[0]) {
      return b[0];
    } else if (b[4] == b[0] && b[8] == b[0]) {
      return b[0];
    }
  } else if ((b[1] == 1 || b[1] == 2) && (b[4] == b[1] && b[7] == b[1])) {
    return b[1];
  } else if (b[2] == 1 || b[2] == 2) {
    if (b[4] == b[2] && b[6] == b[2]) {
      return b[2];
    } else if (b[5] == b[2] && b[8] == b[2]) {
      return b[2];
    }
  } else if ((b[3] == 1 || b[3] == 2) && (b[4] == b[3] && b[5] == b[3])) {
    return b[3];
  } else if ((b[6] == 1 || b[6] == 2) && (b[7] == b[6] && b[8] == b[6])) {
    return b[6];
  } else {
    //no one has won if this is returned
    return 0;
  }

  return 0;
}

//play() conducts turns and win evaluations and returns the final winner (or 0 if its a draw);
int play() {
  std::vector<int> b = {0, 0, 0, 0, 0, 0, 0, 0, 0};
  int winner = 0;
  int turns = 1;
  int whoPlaysNext = 1;

  while (winner == 0 && turns < 10) {
    b = turn(b, whoPlaysNext);
    winner = win_eval(b);
    std::cout << "winner: " << winner << "\n";
    std::cout << "win_eval(): " << win_eval(b) << "\n";
    board(b);
    turns++;
    whoPlaysNext == 1 ? whoPlaysNext = 2 : whoPlaysNext = 1;
  }

  return winner;
}

int main() {
  std::vector<int> b = {2, 1, 0, 2, 1, 0, 0, 1, 0};
  std::cout << win_eval(b);
}