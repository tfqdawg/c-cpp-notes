#include <stdio.h>
#include <string.h>

int main(){
  
  // not assigning variables will lead to undefined behaviour
  int age = 0;
  float gpa = 0.0f; // tells program that gpa is floating point number
  char grade = '\0';
  char name[30] = "";

  // user input
  printf("Enter your age: ");
  scanf("%d", &age);

  printf("enter your gpa: ");
  scanf("%f", &gpa);

  printf("Enter your grade: ");
  scanf(" %c", &grade); // Space before percent sign to tell program to skip over new line character.

  // Accepting String user inputs
  getchar();
  printf("Enter your full name: ");
  fgets(name, sizeof(name), stdin); // use `fgets()` when inputting strings with spaces
  name[strlen(name) - 1] = '\0'; // Null terminator, requires `string.h` header file

  printf("%d\n", age);
  printf("%f\n", gpa);
  printf("%c\n", grade);
  printf("%s\n", name);

  return 0;
}
