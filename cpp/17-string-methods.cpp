#include <iostream>

int main(){

  std::string name;

  std::cout << "Enter name:";
  std::getline(std::cin, name);

 // 1. length method, `name.length()` -> give the length of the string
    if(name.length() > 12){
      std::cout << "Can't bne over 12 characters!";
    }
    else{
      std::cout << "Welcome! " << name;
    }

  // 2. empty method, `name.empty()` -> returns a boolean value
  // used to check if somebody entered a user input
    if(name.empty()){
      std::cout << "You didn't enter your name";
    }
    else{
      std::cout << "Hello " << name;
    }

  // 3. clear method, `name.clear()` -> clear user input

  // 4. append method, `name.append()` -> append a string to another string
    name.append("@gmail.com");
    std::cout << "Your username is " << name;

  // 5. at method, `name.at(index number)` -> return a character at a given position within a string
    std::cout << name.at(0); // character at index number 0

  // 6. insert method, `name.insert(index, "character to insert")` -> insert a chacracter at a given position in a string
    name.insert(0, "@");

  // 7. find method, `name.find('character to find');` -> find a certain character in a string
    std::cout << name.find(' '); // find whitespace

  // 8. erase method, `name.erase(beginning index, end index);` -> erase certain characters from a string
    std::cout << name.erase(0, 3); // erase from index 0 - 3

  return 0;
}
