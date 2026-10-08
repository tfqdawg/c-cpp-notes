/*
  For Loops.
    => Repeat some code a limited no. of times.
*/

#include <stdio.h>
#include <unistd.h>

int main(){
    
  // example.
  for(int i = 10; i >= 0; i--){
    sleep(1);
    printf("%d\n", i);
  }
  printf("Happy New year!");

  return 0;
}
