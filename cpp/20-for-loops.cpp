/*
  For loops,
  for(start statement; stopping statement; counter;){
  
  for counters, 
  1. use `i++` to set increase counter by 1 steps
  2. use `i+=2` set increase counter by 2 steps
  }

  -> usually better if we need to repeat a code for only certain amount of times.
*/
#include <iostream>

int main(){
  
  for(int i = 1; i <= 10; i++){
    std::cout << i << '\n';
  }

  std::cout << "Happy New Year!\n";
  
  return 0;
}
