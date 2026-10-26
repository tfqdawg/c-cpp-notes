#include <iostream>

int main(){
  std::string name;
  
  // while loops to force the user to do something
  while(name.empty()){
    std::cout << "Enter Your Name: "
    std::getline(std::cin, name)
  }
  
  std::cout << "Hello! " << name;

  return 0;
}
