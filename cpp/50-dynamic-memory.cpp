/*
  50. Dynamic Memory: Memory that is allocated after the program is already compiled and running

  -> To allocate dynamic memory, use `new` operator to allocate memory in heap/stack
  -> Useful when we dont know how much memory we will need.
  -> Makes programmore flexible, esp. accepting user input.
    
  -> Good practice is, when using `new` operator, also use the `delete` operator.
*/

#include<iostream>

int main(){

  // Example 1
    // int *pNum = NULL;
    // pNum = new int; // `new` operator will return an address, storing it within `pNum` pointer
    // *pNum = 21;
    //
    // std::cout << "Address: " << pNum << '\n';
    // std::cout << "Value: " << *pNum << '\n';
    //
    // delete pNum; // if we dont delete, may cause memory leak

  // Example 2
  char *pGrades = NULL;
  int size;

  std::cout << "How many grades to enter?: ";
  std::cin >> size;

  pGrades = new char[size];

  for(int i = 0 ; i < size; i++){
    std::cout << "Enter Grade #" << i + 1 << ": "; 
    std::cin >> pGrades[i];
  }

  for (int i = 0; i < size; i++) {
    std::cout << pGrades[i] << " ";
  }

  delete[] pGrades;

  return 0;
}
