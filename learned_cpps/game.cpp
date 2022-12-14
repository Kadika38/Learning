#include <iostream>
#include <iostream>
#include <time.h>

int main() {
  //I got creative and didn't want to write a story, but I think this shows my knowledge just as well.
  std::srand(time(0));

  int entrance;
  int room;
  int next;
  bool alive = true;

  //soldiers alive?
  bool s1 = true;
  bool s2 = true;

  //where are the soldiers?
  int s1room = std::rand() % 6 + 1;
  int s2room = std::rand() % 6 + 1;

  std::cout << "Welcome!  Your job is to make the right decisions to survive!  You are a soldier entering a house you know to be held by enemy soldiers.  If you get unlucky, you may die.  There are two entrences: the front door and the back door.\n  1) Front Door\n  2) Back Door\nChoose: ";
  std::cin >> entrance;

  while (entrance != 1 && entrance != 2) {
    std::cout << "Invalid input!  Try again!\n  1) Front Door\n  2) Back Door\nChoose: ";
    std::cin >> entrance;
  }

  if (entrance == 1) {
    room = 1;
  } else {
    room = 4;
  }

  while ((s1 || s2) && alive) {
    std::cout << "You enter the room.  ";
    if (s1room == room && s1) {
      if (s2room == room && s2) {
        //battle both
        std::cout << "There's two soldiers in the room!  You fire at and kill one, but the other lands his shots.\nYou die.\nTHE END\n";
        alive = false;
      } else {
        //battle s1
        std::cout << "There's a soldier in the room!  You both fire at each other, but you are more accurate and win the fight!\n";
        s1 = false;
      }
    } else if (s2room == room && s2) {
      //battle s2
      std::cout << "There's a soldier in the room!  You both fire at each other, but you are more accurate and win the fight!\n";
      s2 = false;
    }
    //no one here, choose next room
    std::cout << "There's no one alive in this room except for you, but there are still soldiers in this house.  Where do you go?\n  1) The room to the left\n  2) The room to the right\nChoose: ";
    std::cin >> next;
    while (next != 1 && next != 2) {
      std::cout << "Invalid input!  Try again!\n  1) Left\n  2) Right\nChoose: ";
      std::cin >> next;
    }

    if (next == 1) {
      if (room != 1) {
        room = room - 1;
      } else {
        room = 6;
      }
    }
    if (next == 2) {
      if (room != 6) {
        room = room + 1;
      } else {
        room = 1;
      }
    }
  }

  if (alive) {
    std::cout << "Congrats!  You survived!\n";
  }
}