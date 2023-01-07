#include <iostream>

//example of accessing the memory address of a variable
int main() {
  
  int power = 9000;
  
  // Print power
  std::cout << power << "\n";
  
  // Print &power
  std::cout << &power;
  
}