/*

  `break` and `continue`.
    => break = break out of a loop (stop).
    => continue = skip current cycle of a loop (skip).

*/

#include <stdio.h>

int main(){
  
  for (int i = 1; i <= 10; i++) {
    printf("%d\n", i);

    if(i == 4){
      break; // or `continue;` to continue loops
    }
    
    printf("%d\n", i);
  }

  return 0;
}
