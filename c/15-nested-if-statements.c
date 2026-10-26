// Student/Senior Discount Program

#include <stdio.h>
#include <stdbool.h>

int main(){
  
  float price = 10.00;
  bool isStudent = false; // 10% discount
  bool isSenior = true; // 20% discount

  // Students = $9
  // Senior = $8
  // Student + Senior = $7

  if(isStudent){
    if(isSenior){
      printf("You get a student discount of 10%\n");
      printf("You get a senior discount of 20%\n");
      price *= 0.8;
    }
    else {
      printf("You get a student discount of 10%\n");
      price *= 0.9;
    }
  }
  else {
    if(isSenior){
      printf("You get a senior discount of 20%\n");
      price *= 0.8;
    }
  }

  printf("The price of the ticket is: $%.2f\n", price);

  return 0;
}
