/*
  
   realloc().
    => reallocation
    => resize previously allocated memory
    => `realloc(ptr, bytes)`

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

  int number = 0;
  printf("Enter the number of prices: ");
  scanf("%d", &number);

  float *prices = malloc(number * sizeof(float));

  // check if pointer is NULL.
  if(prices == NULL){
    printf("Allocation Failed!");
    return 1;
  }

  for(int i = 0; i < number; i++){
    printf("Enter price no.%d: ", i + 1);
    scanf("%f", &prices[i]);
  }

  // change the number of prices we have.
    int newNumber = 0;
    printf("Enter a new number of prices: ");
    scanf("%d", &newNumber);

    // realloc , we only use it temporarily, hence, the naming `temp`.
    float *temp = realloc(prices, newNumber * sizeof(float));

    if(temp == NULL){
      printf("Could not reallocate!");
    }
    else{
      prices = temp;
      temp = NULL;

      for(int i = number; i < newNumber; i++){
        printf("Enter Price no.%d: ", i + 1);
        scanf("%f", &prices[i]);
      }

      for(int i = 0; i < newNumber; i++){
        printf("$%.2f ", prices[i]);
      }
    }


  free(prices);
  prices = NULL;

  return 0;
}
