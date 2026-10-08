/*
  
   calloc().
    => contiguous allocation.
    => allocates memory ans sets all allocated bytes to 0.
    => `malloc()` is faster, but `calloc()` leads to less bugs.
    => `calloc(#, size)`

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  
  int number = 0;
  printf("Enter the number of players: ");
  scanf("%d", &number);

  int *scores = calloc(number, sizeof(int));

  // check if pointer is null.
  if(scores == NULL){
    printf("Memory Allocation Failed!");
    return 1;
  }
  
  for(int i = 0; i < number; i++){
    printf("Enter score no.%d: ", i + 1);
    scanf("%d", &scores[i]);
  }

  // display all elements in array-like data structure.
  for(int i = 0; i < number; i++){
    printf("%d ", scores[i]);
  }

  free(scores);
  scores = NULL;

  return 0;
}
