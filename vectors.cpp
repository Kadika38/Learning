#include <iostream>
#include <vector>

//Program that finds the sum of even numbers and the product of the odd numbers in a vector.
int main() {

  std::vector<int> nums = {2, 4, 3, 6, 1, 9};

  int evens = 0;
  int odds = 1;

  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] % 2 == 0) {
      evens = evens + nums[i];
    }
    if (nums[i] % 2 != 0) {
      odds = odds * nums[i];
    }
  }

  std::cout << "Sum of even numbers is " << evens <<"\nProduct of odd numbers is " << odds;

}