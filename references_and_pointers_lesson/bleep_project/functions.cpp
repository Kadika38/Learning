#include "functions.hpp"

void bleep(std::string const &bad_word, std::string &literature) {
  int bwsz = bad_word.size();

  int counter = 0;
  for (int i = 0; i < literature.size(); i++) {
    if (literature[i] == bad_word[counter]) {
      counter++;
    } else if (counter > 0) {
      counter = 0;
    }
    if (counter == bwsz) {
      for (int j = i; j > i - bwsz; j--) {
        literature[j] = '*';
      }
      counter = 0;
    }
  }
}