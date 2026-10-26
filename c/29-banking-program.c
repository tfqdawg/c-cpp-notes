#include <stdio.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main(){
  
  //banking program.
  int choice = 0;
  float balance = 0.0f;

  printf("********************\n");
  printf("Welcome to the bank.\n");
  printf("********************\n");

  do{
    printf("\nSelect an option: \n");
    printf("\n1. Check Balance.\n");
    printf("\n2. Deposit.\n");
    printf("\n3. Withdraw.\n");
    printf("\n4. Exit.\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice){
      case 1:
        checkBalance(balance);
        break;
      case 2:
        balance += deposit();
        break;
      case 3:
        balance -= withdraw(balance);
        break;
      case 4:
        printf("\nThank You for using the bank.");
        break;
      default:
        printf("\nInvalid Input! Please select 1-4.\n");
    }
  }while(choice != 4);

  return 0;
}

void checkBalance(float balance){
  printf("\nYour current balance is: $%.2f\n", balance);
}

float deposit(){

  float amount = 0.0f;

  printf("\nEnter Amount to deposit: $");
  scanf("%f", &amount);

  if (amount < 0){
    printf("Invalid Amount!\n");
    return 0.0f;
  }
  else{
    printf("Successfully deposited $%.2f\n", amount);
    return amount;
  }
}

float withdraw(float balance){

  float amount = 0.0f;
  printf("\nEnter amount to withdraw: ");
  scanf("%f", &amount);

  if(amount < 0){
    printf("Invalid amount!\n");
    return 0.0f;
  }
  else if(amount > balance){
    printf("Insufficient Funds! Your balance is $%.2f\n", balance);
    return 0.0f;
  }
  else{
    printf("Successfully withdrew $%.2f\n", amount);
    return amount;
  }
}
