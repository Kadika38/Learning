#include <iostream>

//example of a null pointer in use.  NEVER declare a pointer that isn't pointed anywhere
int main() {
  
  int power = 9000;
  
  // Create pointer
  //THIS
  int* ptr = nullptr;
  //NOT THIS
  //int* ptr;
  
  // Later in the program...
  ptr = &power;
  
  // Print ptr
  std::cout << ptr << "\n";
  
}