/*
  2D Array.
    => An array where each element is an array
      `array[][] = {{}, {}, {}};`
*/

#include <stdio.h>

int main(){

  // numpad program.
  char numpad[][3] = {{'1', '2', '3'},
                      {'4', '5', '6'},
                      {'7', '8', '9'}, 
                      {'*', '0', '#'}};

  // nested loops to display all elements in a 2D array.
  for(int i = 0; i < 3; i++){ // rows
    for(int j = 0; j < 3; j++){ // columns 
      printf("%c ", numpad[i][j]);
    }
    printf("\n");
  }
  return 0;
}
