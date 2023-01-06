#include <iostream>
#include <string>
#include "functions.hpp"

int main() {

  std::string word = "broccoli";
  std::string text = "I went to the store to pick up some broccoli.  They were out of broccoli, so I went to find broccoli at Costco.  They had a ton of broccoli, but it was purple.  I went to the broccoli fields and found some fresh broccoli.  It was expensive, but yummy!";

  bleep(word, text);

  std::cout << text;

}