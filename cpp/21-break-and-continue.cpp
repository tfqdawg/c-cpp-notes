/*
  -> break: break out of a loop
  -> continue: skip current iteration
*/

#include <iostream>

int main(){
  
  // example: skip 13th iteration
  for(i = 1; i <= 20, i++){
    if(i == 13){
      break; // stop at iteration
      // continue; // skip current iteration
    }

    std::cout << i << '\n';
  }

  return 0;
}
