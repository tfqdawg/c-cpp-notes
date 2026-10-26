/*

  arrays.
    => A fized-size collection of elements of the same data type.
    => similar toa variable, but it holds more than 1 value.

*/

#include <stdio.h>

int main(){
  
  // initialize arrays.
  int numbers[] = {10, 20, 30, 40, 50, 60, 70};
  char grades[] = {'A', 'B', 'C', 'D', 'F'};
  char name[] = "Taufiq Haikal";

  // find size of array (in bytes).
    // printf("%d bytes\n", sizeof(numbers));
  
  // find size of one element in an array.
    // printf("%d", sizeof(numbers[0]));

  int size = sizeof(numbers) / sizeof(numbers[0]);

  // loop to display all elements in an array.
    for(int i = 0; i < size; i++){
      printf("%c ", grades[i]);
    }

  return 0;
}
