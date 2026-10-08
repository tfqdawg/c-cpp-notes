// Alternative to using many if-else statements.
// More efficient with fixed integer values.

#include <stdio.h>

int main(){
  
  int dayOfWeek = 0;

  printf("Enter a day of the week (1-7): ");
  scanf("%d", &dayOfWeek);

  switch(dayOfWeek){
    case 1: 
      printf("It is Monday!");
      break;
    case 2:
      printf("It is Tuesday!");
      break;
    case 3:
      printf("It is Wednesday!");
      break;
    case 4:
      printf("it is Thursday!");
      break;
    case 5:
      printf("it is Friday!");
      break;
    case 6:
      printf("it is Saturday!");
      break;
    case 7:
      printf("it is Sunday!");
      break;
    default:
      printf("Invalid Input (Only 1-7)!");
  }

  return 0;
}
