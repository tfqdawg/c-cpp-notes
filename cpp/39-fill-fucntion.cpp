/*
  -> `fill()`: fills a range of elements with a specified value
      `fill(begin, end, value)`
*/

#include <iostream>

int main(){
  
  const int SIZE = 99;
  std::string foods[SIZE];
  
  // fill the initialized array
  fill(foods, foods + (SIZE/3), "pizza"); // fill 1/3 with pizza
  fill(foods + (SIZE/3), foods + (SIZE/3)*2, "burger"); // fill 1/3 with burger
  fill(foods + (SIZE/3)*2, foods + SIZE. "hotdog"); // fill 1/3 with hotdog

  for(std::string food : foods){
    std::cout << food << '\n';
  }

  return 0;
}
