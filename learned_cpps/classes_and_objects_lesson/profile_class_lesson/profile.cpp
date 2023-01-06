#include "profile.hpp"
#include <iostream>

Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns) {
  name = new_name;
  age = new_age;
  city = new_city;
  country = new_country;
  pronouns = new_pronouns;
}

std::string Profile::view_profile() {
  std::string profile_summary = "Name: " + name;
  profile_summary += "\nAge: " + std::to_string(age);
  profile_summary +=  "\nPronouns: " + pronouns;
  profile_summary += "\nLocation: " + city;
  profile_summary += ", " + country;
  if (hobbies.size() > 0) {
    profile_summary += "\nHobbies: ";
    for (int i = 0; i < hobbies.size(); i++) {
      profile_summary += hobbies[i];
      if (i < hobbies.size() - 2) {
        profile_summary += ", ";
      } else if (i == hobbies.size() - 2) {
        profile_summary += ", and ";
      } else {
        profile_summary += "\n";
      }
    }
  }

  return profile_summary;
}

void Profile::add_hobby(std::string new_hobby) {
  hobbies.push_back(new_hobby);
}