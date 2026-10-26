/*
  41. Multidimensional arrays
    -> Arrays made up of separate arrays.
    -> can represent grid or matrix of data.
*/

#include <iostream>

int main(){
  
  std::string cars[][3] = {{ "Mustang", "Escape", "F-150" }, // `cars[][]` [rows][column], can initialize with row empty but must specify columns
                          { "Corvette", "Equinox", "Silverado" }, // after every array, use `,` before dtart another
                          { "Challenger", "Durango", "Ram 1500" }};

  // Access the arrays using 2 indices
    // std::cout << cars[0][0] << " ";
    // std::cout << cars[0][1] << " ";
    // std::cout << cars[0][2] << "\n\n";
    // std::cout << cars[1][0] << " ";
    // std::cout << cars[1][1] << " ";
    // std::cout << cars[1][2] << "\n\n";
    // std::cout << cars[2][0] << " ";
    // std::cout << cars[2][1] << " ";
    // std::cout << cars[2][2] << "\n\n";

  // Iterate over array using nested loops
  int rows = sizeof(cars)/sizeof(cars[0]);
  int columns = sizeof(cars[0])/sizeof(cars[0][0]);

  for (int i = 0; i < rows; i++){
    for (int j = 0; j < columns; j++){
      std::cout << cars[i][j] << " ";
    }
    std::cout << '\n';
  }
  
  return 0;
}
