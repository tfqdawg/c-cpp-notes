/*
  48. Null pointers

    -> Null value: a special value that means something has no value.
    -> when a pointer is holding a null value, that pointer is not pointing at anything (null pointer)

    -> nullptr = keyword represents a null pointer literal

    -> nullptrs are useful to determine if an address was successfully assigned to a pointer
    
    when using pointers be careful to,
      -> not dereference nullptr or pointing to free memory
*/

#include <iostream>

int main(){

  int *pointer = nullptr; // create null pointer, logic: derefernce a pointer to return no value
  int x = 123;

  pointer = &x;

  // check if a pointer has a valid address before dereferencing it
  if(pointer == nullptr){
    std::cout << "Address was not assigned!\n";
  }
  else{
    std::cout << "Address was assigned!\n";
    std::cout << *pointer;
  }

  return 0;
}
