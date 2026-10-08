/*
  47. Pointers
    -> a variable set that stores a memory address of another variable
    -> sometimes its easier to work with an address

    -> `&` address-of operator 
    -> `*` dereference operator
*/

#include <iostream>
#include <string>

int main(){
  
  std::string name = "Tau";
  int age = 24;
  std::string freePizza[5] = { "pizza1", "pizza2", "pizza3", "pizza4", "pizza5" };
  
  //pointers
  std::string *pname = &name; // create a pointer
  int *page = &age; 
  std::string *pfreePizza = freePizza; // no need to prefix with `&` since array already is a memory address.

  // acessing `std::string name;`
  std::cout << pname; // print memory address
  std::cout << *pname << '\n'; // prefix with `*` to access the value of the address

  // acessing `int age;`
  std::cout << age;
  std::cout << *page << '\n';

  // acessing `std::string freePizza[5];`
  std::cout << *pfreePizza << '\n';

  return 0;
}
