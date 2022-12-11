#include <iostream>

int main() {
  
  double tempf = 34;
  double tempc;
  
  //calc in celcius
  tempc = (tempf - 32) / 1.8;
  
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
  
}