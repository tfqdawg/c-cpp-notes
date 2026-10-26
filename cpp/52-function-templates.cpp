/*

  52. Function templates
      -> Describes what functions look like
      -> Can be used to generate as many overloaded functions as needed, each with different data types.

*/

#include <iostream>

// Template parameter declaration
template <typename T, typename U>

auto max(T x, U y){ // auto asks the compiler to deduce the return type
  return(x > y) ? x : y;
}

int main(){

  std::cout << max(1, 2.1) << '\n';

  return 0;
}
