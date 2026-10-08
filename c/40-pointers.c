/*

  pointers.
    => A variable that stores the memory address of another variable.
    => Benefit: they help avoid wasting memory by allowing you to pass
                the address of a large data structure instead of copying
                the entire data.
    => `%p` is a format specifier to print pointer address.
    => `&` -> Address of operator.
    => `*` -> dereference operator.

*/

#include <stdio.h>

void Birthday(int* age);

int main(){
  
  int age = 25;
  int *pAge = &age; // create a pointer
  
  Birthday(pAge);
  printf("You are %d years old!", age);

  return 0;
}

void Birthday(int* age){
  // pass pointer by reference to a function.
  (*age)++;
}
