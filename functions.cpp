#include <iostream>
#include <cmath>

// Define tenth_power() here:
int tenth_power(int num) {
  int hold = num;
  for (int i = 9; i > 0; i--) {
    hold = hold * num;
  }
  return hold;
}

int main() {
  
  std::cout << tenth_power(0) << "\n";
  std::cout << tenth_power(1) << "\n";
  std::cout << tenth_power(2) << "\n";
  
}