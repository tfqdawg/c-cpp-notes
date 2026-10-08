/*

   random numbers.
    => Appear random but are determined by a mathematical formula that uses a seed value
       to generate a predictable sequence of numbers.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  
  srand(time(NULL)); // seed.

  int min = 50;
  int max = 100;

  int randomNum1 = (rand() % (max - min + 1)) + min; // `+1` as in modulus, 0 is still a possible value.
  int randomNum2 = (rand() % (max - min + 1)) + min;
  int randomNum3 = (rand() % (max - min + 1)) + min;

  printf("%d %d %d", randomNum1, randomNum2, randomNum3);

  return 0;
}
