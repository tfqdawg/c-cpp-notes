#include <stdio.h>

int main(){
  
  // write to a file program.
  FILE *pFile = fopen("output.txt","w");

  char text[] = "Booty Booty Booty\nRockin' Everywhere!";

  if (pFile == NULL){
    printf("Error opening file.\n");
    return 1; // exit code.
  }
  
  fprintf(pFile, "%s", text);

  printf("Successfully written!");

  fclose(pFile);

  return 0;
}
