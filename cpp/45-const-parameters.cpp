/*
  45. const parameters
    -> parameter that is effectively read-only
    -> make code more secure
    -> conveys intent
    -> useful for references and pointers
*/

#include <iostream>

void printInfo(const std::string name, const int age);

int main(){
  
  std::string name = "Tau";
  int age = 24;

  printInfo(name, age);

  return 0;
}

void printInfo(const std::string name, const int age){ // prefix params with `const` to protect values
  std::cout << name << '\n';
  std::cout << age << '\n';
}
