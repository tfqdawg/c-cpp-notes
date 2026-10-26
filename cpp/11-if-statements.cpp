/*
  If statements: if a condiiton is true, do it, if not, don't do it.
*/

#include <iostream>

int main(){
  // Context: it age is > 18, let into the site, if < 18. don't let in.
  int age;

  std::cout << "Enter age: ";
  std::cin >> age;

  // if statement to check age
  if(age >= 100){
    std::cout << "too old DAMN!";
  }
  else if(age >= 18){
    std::cout << "Welcome!";
  }
  else if(age < 0){
    std::cout << "lol WHAT!";
  }
  else{
    std::cout << "Not old enough!";
  }

  return 0;
}
