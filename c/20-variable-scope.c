/*
  Variable Scope.
    => refers to where a varaible is recognized and accessible
    => Variables can share the same name as long as they are in different scopes.
    => Try to avoid delaring variables in the Global Scope.
*/

#include <stdio.h>

int add(int x, int y){
  int result = x + y;
  return result;
}

int subtract(int x, int y){
  int result = x - y;
  return result;
}

int main(){
    
  int x = 5;
  int y = 6;

  //int result = add(3, 4);
  int result = subtract(x, y);

  printf("%d", result);

  return 0;
}
