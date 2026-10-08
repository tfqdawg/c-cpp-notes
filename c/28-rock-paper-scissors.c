#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getCompChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);

int main(){
  
  // rock, paper, scissors game.
  srand(time(NULL));

  printf("***************************\n");
  printf("Rock, Paper, Scissors game.\n");
  printf("***************************\n");

  int userChoice = getUserChoice();
  int computerChoice = getCompChoice();

  switch (userChoice){
    case 1:
      printf("You chose Rock.\n");
      break;
    case 2:
      printf("You chose Paper.\n");
      break;
    case 3:
      printf("You chose Scissors.\n");
      break;
  }

  switch (computerChoice){
    case 1:
      printf("Computer chose Rock.\n");
      break;
    case 2:
      printf("Computer chose Paper.\n");
      break;
    case 3:
      printf("Computer chose Scissors.\n");
      break;
  }

  checkWinner(userChoice, computerChoice);

  return 0;
}

int getCompChoice(){
  return (rand() % 3) + 1;
}

int getUserChoice(){
  int choice = 0;
  do {
    printf("Choose an option.\n");
    printf("1. Rock.\n");
    printf("2. Paper.\n");
    printf("3. Scissors.\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
  }while (choice < 1 || choice > 3);

  return choice;
}

void checkWinner(int userChoice, int computerChoice){
  if(userChoice == computerChoice){
    printf("It's a tie!");
  }
  else if ((userChoice == 1 && computerChoice == 3) ||
          (userChoice == 2 && computerChoice == 1) ||
          (userChoice == 3 && computerChoice == 2)){
    printf("You win!");
  }
  else{
    printf("You Lose!");
  }
}
