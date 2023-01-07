#include <iostream>

//example of using the deference operator to read the value stored at the location a pointer points to
int main() {
  
  int power = 9000;
  
  // Create pointer
  int* ptr = &power;
  
  // Print ptr
  std::cout << ptr << "\n";
  
  // Print *ptr
  std::cout << *ptr;
  
}