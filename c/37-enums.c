/*

  enums.
    => A user defined data type that consists of  a set of names integer constants.
    => Benefit: Replaces numbers with readable names.

*/

#include <stdio.h>


typedef enum{
  SUCCESS, FAILURE, PENDING
}Status;

void connectStatus(Status status);

int main(){
  // example.
    Status status = SUCCESS;
    connectStatus(status);

  return 0;
}

void connectStatus(Status status){
  switch(status){
    case SUCCESS:
      printf("Connection was successful!\n");
      break;
    case FAILURE:
      printf("Could not connect!\n");
      break;
    case PENDING:
      printf("Connecting...\n");
      break;
  }
}
