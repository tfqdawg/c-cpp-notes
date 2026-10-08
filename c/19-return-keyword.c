// returns a value back to where you call a function

#include <stdio.h>
#include <stdbool.h>

bool ageCheck(int age){
  if(age >= 18){
    return true;
  }
  else {
    return false;
  }
}

double cube(double num){
  return num * num * num;
}

double square(double num){
  return num * num;
}

int getMax(int x, int y){

  if(x > y){
    return x;
  }
  else {
    return y;
  }
}

int main(){

  // call ageCheck() function
  int age = 21;
  if (ageCheck(age)) {
    printf("You may sign up!");
  }
  else {
    printf("You must be 18+ sign up");
  }

  // call cube() function
  double x = cube(2);
  double y = cube(3);
  double z = cube(4);

  // call square() function
  printf("%lf\n", x);
  printf("%lf\n", y);
  printf("%lf\n", z);

  // call getMax() function
  int max = getMax(2, 3);

  printf("%d", max);

  return 0;
}
