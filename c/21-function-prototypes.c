/*

  Function Prototypes.
    => provide the compiler with information about a functions:\
      -> name, return type, and parameters before its actual definition
      -> Enables type checking and allows functions to be used before they are defined
      -> Improves readability, organization, and helps prevent errors.

*/

#include <stdio.h>
#include <stdbool.h>

void hello(char name[], int age);
bool ageCheck(int age);

int main(){
  
  hello("Spongebob", 30);

  if (ageCheck(30)) {
    printf("You are old enough to work at crusty crab!");
  }
  else {
    printf("You must be 16+ to work at krusty crab!");
  }

  return 0;
}

void hello(char name[], int age){
  printf("Hello %s\n", name);
  printf("You are %d years old\n", age);
}

bool ageCheck(int age){
  return age >= 16;
}
