#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>

int main(){
  
  // digital clock.
  time_t rawtime = 0; // Jan 1, 1970 (Unix Epoch)
  struct tm *pTime = NULL;
  bool isRunning = true;

  printf("\nDigital Clock.\n");

  while(isRunning){
    
    time(&rawtime);
    
    pTime = localtime(&rawtime); // function will return a pointer to a pre-defined time structs
    
    printf("\r%02d:%02d:%02d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec); // `\r` moves the character back to the beginning.

    sleep(1);
  }

  return 0;
}
