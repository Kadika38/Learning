#include <iostream>

int main() {
  
  double pesos;
  double reais;
  double soles;
  double dollars;

  std::cout << "Enter the number of Colombian Pesos: ";
  std::cin >> pesos;

  std::cout << "Enter the number of Brazilian Reais: ";
  std::cin >> reais;

  std::cout << "Enter the number of Peruvian Soles: ";
  std::cin >> soles;

  //conversions: 0.00021 pesos | 0.19 reais | 0.26 soles

  dollars = (pesos * 0.00021) + (reais * 0.19) + (soles * 0.26);

  std::cout << "US Dollars = $" << dollars << "\n";
  
}