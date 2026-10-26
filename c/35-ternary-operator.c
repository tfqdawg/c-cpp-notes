/*

  ternary operator.
    => `?` shorthand for if-else statements
    => `condition ? value_if_true : value_if_false;`

*/

#include <stdio.h>
#include <stdbool.h>

int main(){
  
  // example 1.
  bool isOnline = true;
  printf("%s", (isOnline) ? "Online." : "Offline.");

  // example 2, determine no. is even/odd.
  int number = 8;
  printf("%d is %s", number, (number % 2 == 0) ? "Number is Even." : "Number is Odd.");

  // example 3.
  int age = 21;
  printf("%s", (age > 18) ? "Adult." : "Child.");

  // example 4.
  int hours = 11;
  int minutes = 30;
  char *meridiem = (hours < 12) ? "A.M." : "P.M.";

  printf("%02d:%02d %s", hours, minutes, meridiem);

  return 0;
}
