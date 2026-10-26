/*
  -> do some block of code first, the repeat again if condition is true.
*/

#include <iostream>

int main(){

  int number;

  do{
    std::cout << "Enter a +ve number: ";
    std::cin >> number;
  }while(number < 0)

  std::cout << "the number is: " << number;

  return 0;
}
