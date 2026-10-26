/*
  Function: -> A reusable section of code that can be invoked "called".
            -> Arguments can be sent toa fucntion so that it can use them.
*/

#include <stdio.h>
#include <string.h>

void happyBirthday(char birthdayboi[], int yearsOld){ // parameters name does not have to be the same when called in `int main()`
  printf("\nHappy Birthday to You!");
  printf("\nHappy Birthday to You!");
  printf("\nHappy Birthday dear %s!", birthdayboi);
  printf("\nHappy Birthday to You!");
  printf("\nYou are %d years old!", yearsOld);
}

int main(){
  
  char name[50] = "";
  int age = 0;

  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);
  name[strlen(name) - 1] = '\0';

  printf("Enter your age: ");
  scanf("%d", &age);

  happyBirthday(name, age);

  return 0;
}
