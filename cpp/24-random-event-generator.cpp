/*
  -> random event generator using random numbers and switch
*/
#include <iostream>
#include <ctime>

int main(){
  
  srand(time(0));
  int randNum = rand() % 5 + 1; // `% 5` will result with ranges 0-4, so we add `% 5 + 1`
  
  switch(randNum){
    case 1: 
      std::cout << "You win a grand prize!\n";
      break;
    case 2:
      std::cout << "You win a T-Shirt!\n";
      break;
    case 3:
      std::cout << "You win a free lunch!\n";
      break;
    case 4:
      std::cout << "You win a gift card!\n";
      break;
    case 5:
      std::cout << "You win a concert tickets!\n";
      break;
  }

  return 0;
}
