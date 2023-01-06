#include <iostream>

//basic example of a reference
int main() {
  
  int soda = 99;
  
  int &pop = soda;

  pop += 1;

  std::cout << soda << "\n";
  std::cout << pop;
}