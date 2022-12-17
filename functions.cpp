#include <iostream>
#include <vector>

// Define first_three_multiples() here:
std::vector<int> first_three_multiples(int num) {
  std::vector<int> hold;
  hold.push_back(num);
  hold.push_back(num * 2);
  hold.push_back(num * 3);
  return hold;
}

int main() {
  
  for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
  }
  
}