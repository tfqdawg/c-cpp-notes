#include <stdio.h>

int main(){
  
  int x = 10;
  int y = 3;
  int z = 0;

  // 1. Addition
    z = x + y;
  
  // 2. Subtraction
    z = x - y;
  
  // 3. Multiplication
    z = x * y;
  
  // 4. Division
    z = x / y; // x & y must be float data types to get answer.

  // 5. Modulus (get remainder)
    z = x % y;

  // 6. Increment
    x++;

  // 7. Decrement
    x--;

  // 7. Augmented assignment operators
    // Add
      x+=2;

    // Subtract
      x-=2;

    // Multiply
      x*=2;

    // Division
      x/=2;

  printf("%d", z);

  return 0;
}
