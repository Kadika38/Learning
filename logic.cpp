#include <iostream>

int main() {

  int g = 0;
  int h = 0;
  int r = 0;
  int s = 0;

  int a1;
  int a2;
  int a3;
  int a4;

  std::cout << "The Sorting Hat Quiz!\n";

  std::cout << "Q1) When I'm dead, I want people to remember me as:\n" << " \n" << "  1) The Good\n" << "  2) The Great\n" << "  3) The Wise\n" << "  4) The Bold\n";
  std::cin >> a1;

  if (a1 == 1) {
    h = h = 1;
  } else if (a1 == 2) {
    s = s + 1;
  } else if (a1 == 3) {
    r = r + 1;
  } else if (a1 == 4) {
    g = g + 1;
  } else {
    std::cout << "Invalid input.\n";
  }

  std::cout << "Q2) Dawn or Dusk?\n" << " \n" << "  1) Dawn\n" << "  2) Dusk\n";
  std::cin >> a2;

  if (a2 == 1) {
    g = g + 1;
    r = r + 1;
  } else if (a2 == 2) {
    h = h + 1;
    s = s + 1;
  } else {
    std::cout << "Invalid input.\n";
  }

  std::cout << "Q3) Which kind of instrument most pleases your ear?\n" << " \n" << "  1) The violin\n" << "  2) The trumpet\n" << "  3) The piano\n" << "  4) The drum\n";
  std::cin >> a3;

  if (a3 == 1) {
    s = s + 1;
  } else if (a3 == 2) {
    h = h + 1;
  } else if (a3 == 3) {
    r = r + 1;
  } else if (a3 == 4) {
    g = g + 1;
  } else {
    std::cout << "Invalid input\n";
  }

  std::cout << "Q3) Which road tempts you the most?\n" << " \n" << "  1) The wide, sunny grassy lane\n" << "  2) The narrow, dark, lantern-lit alley\n" << "  3) The twisting, leaf-strewn path through woods\n" << "  4) The cobbled street lined (ancient buildings)\n";
  std::cin >> a4;

  if (a4 == 1) {
    h = h + 1;
  } else if (a4 == 2) {
    s = s + 1;
  } else if (a4 == 3) {
    g = g + 1;
  } else if (a4 == 4) {
    r = r + 1;
  } else {
    std::cout << "Invalid input\n";
  }

  int max = 0;
  std::string house;
  if (g > max) {
    max = g;
    house == "Gryffindor";
  }
  if (h > max) {
    max = h;
    house == "Hufflepuff";
  }
  if (r > max) {
    max = r;
    house = "Ravenclaw";
  }
  if (s > max) {
    house = "Slytherin";
  }

  std::cout << house << "!\n";

}