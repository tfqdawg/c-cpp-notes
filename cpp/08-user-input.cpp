// cout << (insertion operator)
// cin << (extraction operator)

#include <iostream>

int main(){
  // variables
  std::string name;
  int age;

  std::cout << "Name: ";
  std::getline(std::cin >> std::ws, name); // function to read spaces in strings

  std::cout << "Your Age: ";
  std::cin >> age;

  std::cout << "Hello! " << name << '\n';
  std::cout << "You are " << age << " years old!";

  return 0;
}
