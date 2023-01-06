#include <iostream>

//basic example of a pointer
int main() {
  
  int power = 9000;
  
  // Create pointer
  int* ptr = &power;
  
  // Print ptr
  std::cout << ptr;
  
}