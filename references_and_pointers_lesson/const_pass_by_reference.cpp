#include <iostream>

//example of saving computational effort by const'ing and referencing
//  this way no new variable is initialized, which would wate effort when it's not necessary

int square(int const &i) {

  return i * i;

}

int main() {
  
  int side = 5;
  
  std::cout << square(side) << "\n";

}