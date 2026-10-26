/*
  Logical Operators
    `&&` - AND
    `||` - OR
    `!` - NOT

*/

#include <stdio.h>
#include <stdbool.h>

int main(){
  
  // Example 1
  int temp = 0;
  if (temp > 0 && temp < 30) {
    printf("The temperature is good!\n");
  }
  else {
    printf("The temperature is bad!\n");
  }

  // Example 2
  bool isSunny = false;
  if(!isSunny){
    printf("It is SUNNY outside!\n");
  }
  else{
    printf("It is CLOUDY outside!\n");
  }

  return 0;
}
