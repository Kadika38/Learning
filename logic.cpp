#include <iostream>

int main() {
  
  int year;

  std::cout << "Enter year: ";
  std::cin >> year;

  if ((year > 999) && (year % 4 == 0) && (year % 100 == 0) && (year % 400 == 0)) {
    std::cout << "Thats a leap year!\n";
  }
  
}