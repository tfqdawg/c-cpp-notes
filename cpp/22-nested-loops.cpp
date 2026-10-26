// Nested Loops
// prefer to use 'j' as the counting indes in nested loops

#include <iostream>

int main(){
  // example 1: count from 1-10, repeat 3 times
  // for(i = 1; i <= 3; i++){
  //   for(j = 1; j = 10; j++){
  //     std::cout << j << ' ';
  //   }
  //   std::cout << '\n';
  // }

  // example 2: print a rectangle using symbols with user decidding on the rows and columns
  int rows;
  int columns;
  char symbol;

  std::cout << "How many rows?: ";
  std::cin >> rows;

  std::cout << "How many columns?: ";
  std::cin >> columns;

  std::cout << "Symbols to use?: ";
  std::cin >> symbols;

  for(int i = 1, i <= rows, i++){
    for(int j = 1, j <= columns, j++){
      std::cout << symbol;
    }
  }

  return 0;
}
