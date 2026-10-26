/*

  51. Recursion 
    -> Programming technique where a function invokes itself from within
    -> Breaks a complex concept into repeatable single steps

    Advantages -> Less code, cleaner, useful for sorting ans searching algorithms

    Disadvantages -> Uses more memory, Slower.

*/

#include <iostream>

// void walk(int steps)
int factorial(int num);

int main(){

  // walk(100); //Iterative approach; invoke function in `int main`

  std::cout << factorial(10);

  return 0;
}

// void walk(int steps){
//   if (steps > 0) {
//     std::cout << "You took a step!\n";
//     walk(steps - 1); // Recursive approach; invoke function witihin itself
//   }
// }

int factorial(int num){
  // ITERATIVE APPROACH
  // int result = 1;
  // for (int i = 1; i <= num; i++) {
  //   result = result * i;
  // }
  // return result;

  // RECURSIVE APPROACH
  if (num > 1){
    return num * factorial(num - 1);
  }
  else{
    return 1;
  }
}
