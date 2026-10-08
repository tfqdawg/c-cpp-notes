/*
  -> Local variables: declareed inside a function or block {}.
  -> Global variables: declared outside of all functions (try to avoid if possible).
  -> variables can have the same name, just as long within different scopes.
*/

#include <iostream>

// global variable, valid in all scopes
int myNum = 3;

void printNum();

int main(){
  // local variable, only valid within int main(){}.
  int myNum = 1; 
  printNum();
  std::cout << myNum; //   to print golbal version of a variable, use `std::cout << ::myNum;`

  return 0;
}

void printNum(){
  int myNum = 2;
  std::cout << myNum;
}
