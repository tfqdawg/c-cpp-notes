/*
  43. Memory Addresses
    -> a location in memory where data is stored
    -> can be accessed with & (address-of operator)
*/

#include <iostream>

int main(){
  
  std::string name = "Tau";
  int age = 24;
  bool student = true;
 
  std::cout << &name << '\n'; // output will be a hexadecimal address.
  std::cout << &age<< '\n';
  std::cout << &student << '\n';
  
  return 0;
}
