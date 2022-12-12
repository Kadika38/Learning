#include <iostream>

int main() {
  
  double ew;
  int planet;

  std::cout << "What is your Earth weight? ";
  std::cin >> ew;

  std::cout << "What planet do you want to fight on? ";
  std::cin >> planet;

  switch(planet) {

    case 1 :
      std::cout << "Your weight on Mercury is " << (ew * 0.38) << "\n";
      break;
    case 2 :
      std::cout << "Your weight on Venus is " << (ew * 0.91) << "\n";
      break;
    case 3 :
      std::cout << "Your weight on Mars is " << (ew * 0.38) << "\n";
      break;
    case 4 :
      std::cout << "Your weight on Jupiter is " << (ew * 2.34) << "\n";
      break;
    case 5 :
      std::cout << "Your weight on Saturn is " << (ew * 1.06) << "\n";
      break;
    case 6 :
      std::cout << "Your weight on Uranus is " << (ew * 0.92) << "\n";
      break;
    case 7 :
      std::cout << "Your weight on Neptune is " << (ew * 1.19) << "\n";
      break;
    default :
      std::cout << "Bad input!\n";
      break;

  }
}