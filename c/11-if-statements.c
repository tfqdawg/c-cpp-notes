// In `if` statements, we need to pay attention to the orders!

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){

  // EXAMPLE 1
    // int age = 0;
    //
    // printf("Enter your age: ");
    // scanf("%d", &age);
    //
    // if(age >= 65){
    //   printf("You are a senior");
    // }
    // else if(age >= 18){
    //   printf("You are an adult");
    // }
    // else if(age < 0){
    //   printf("You havent been born yet");
    // }
    // else if(age == 0){
    //   printf("You are a newborn");
    // }
    // else{
    //   printf("You are a child");
    // }

  // EXAMPLE 2
    // bool isStudent = true;
    //
    // if (isStudent == true){ // or if(isStudent){} in the case of boolean
    //   printf("You are a student");
    // }
    // else {
    //   printf("You are not a student");
    // }

  // EXAMPLE 3
    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    if(strlen(name) == 0){
      printf("You did not enter your name");
    }
    else {
      printf("Hello %s!", name);
    }

  return 0;
}
