#include "functions.hpp"

void bleep(std::string const &bad_word, std::string &literature) {
  int bw_sz = bad_word.size();
  int counter = 0;

  for (int i = 0; i < literature.size(); i++) {
    if (counter == 0 && literature[i] == bad_word[0]) {
      //to be continued
    }
  }
}