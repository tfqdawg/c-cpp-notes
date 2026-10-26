#include <iostream>

void swap(std::string x, std::string y);

int main(){

  std::string x = "Kool-Aid";
  std::string y = "Water";

  swap(x, y); // when we invoke functions we are creating copyies of original values

  std::cout << "X: " << &x << '\n';
  std::cout << "Y: " << &y << '\n';

  return 0;
}

// swap two variables
void swap(std::string x, std::string y){ // when we prefix `&x` we are passing memory address to original values

  std::cout << "X: " << &x << '\n';
  std::cout << "Y: " << &y << '\n';
}
