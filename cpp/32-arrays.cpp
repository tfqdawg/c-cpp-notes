/*
  -> Array: data structure that can hold multiple values.
            - values are accessed by index numbers.
            - values can only be of the same data type.

  -> to initialize an array, use `variable_name[] = {};`
*/

#include <iostream>

int main(){
  // EXAMPLE 1
  std::string cars[3] = { "Mercedes", "Mustang", "Supra" };

  /*
    -> we can also reassign values in arrays. for example, reassigning the cars in index [0] using,

           `cars[0] = "Camaro";`
  */

  std::cout << cars[0] << '\n'; // If we do only `std::cout << cars;`, it will print a memory address whey the array is located.  
  std::cout << cars[1] << '\n';
  std::cout << cars[2] << '\n';

  // EXAMPLE 2
  double prices[] = { 5.00, 7.50, 9.99, 15.00 };

  std::cout << prices[0] << '\n';
  std::cout << prices[1] << '\n';
  std::cout << prices[2] << '\n';
  std::cout << prices[3] << '\n';

  return 0;
}
