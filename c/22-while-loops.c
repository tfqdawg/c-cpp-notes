/*
  While Loops.
    => Continue some code WHILE the condition remains true.
    => Condition must be true for us to enter the while loop.
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
  
  int number = 0;

  // while loop (check conditions at the beginning).
    while(number <= 0){
      printf("Enter a number greater than 0: ");
      scanf("%d", &number);
    }

  // do-while loop (execute code, then check condition at the end).
    do {
      printf("Enter a number greater than 10: ");
      scanf("%d", &number);
    }while(number <= 0);

  // Example using strings.
    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0){
      printf("Name cannot be empty! Please enter your name: ");
      fgets(name, sizeof(name), stdin);
    }

    printf("Hello %s!", name);

  // Example using boolean.
    bool isRunning = true;
    char response = '\0';

    while(isRunning){
      printf("You are playing a game!");
      printf("Would you like to continue? (Y/N): ");
      scanf(" %c", &response);

      if(response != 'Y' && response != 'y'){
        isRunning = false;
      }
    }

    printf("You exit the game!");

  return 0;
}
