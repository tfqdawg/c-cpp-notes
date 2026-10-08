/*

  malloc().
    => A function in C that dynamically allocates a specified number of bytes in memory
    => if you need an array but not sure of the size.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

  int number = 0;
  printf("Enter the number of grades: ");
  scanf("%d", &number);

  char *grades = malloc(number * sizeof(char));

  if (grades == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
  }

  for(int i = 0;  i < number; i++){
    printf("Enter grade no.%d: ", i + 1);
    scanf(" %c", &grades);
  }

  for(int i = 0; i < number; i++){
    printf("%c ", grades[i]);
  }

  free(grades); // free the memory from rented memory from malloc().
  grades = NULL; // avoids dangling pointers (can think of like returning key of a rented apartment.)
  
  return 0;
}
