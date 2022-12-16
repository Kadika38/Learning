#include <iostream>
#include <vector>
#include <string>

int main() {

  std::string original = "execute order sixty-six";

  std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};

  std::vector<char> result;

  for (int i = 0; i < original.size(); i++) {
    for (int j = 0; j < vowels.size(); j++) {
      if (original[i] == vowels[j]) {
        result.push_back(vowels[j]);
        if (vowels[j] == 'e' || vowels[j] == 'u') {
          result.push_back(vowels[j]);
        }
      }
    }
  }

  for (int f = 0; f < result.size(); f++) {
    std::cout << result[f];
  }
  std::cout << "\n";

}