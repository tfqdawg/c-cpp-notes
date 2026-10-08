// When array is passed to a function, it is  decased into a pointer
// we need to manually pass the array size an a second argument

#include <iostream>

double getTotal(double prices[], int size);

int main(){
  double prices[] = { 49.99, 15.05, 75.00, 9.99 };
  int size = sizeof(prices) / sizeof(prices[0]);
  double total = getTotal(prices, size); // only pass array name in `int main()`
                                         // since other functions wont know array size, pass `size` as s 2nd argument

  std::cout << "$" << total;

  return 0;
}

double getTotal(double prices[], int size){ // size as 2nd argument
  double total = 0;
  
  for(int i = 0; i < size; i++){
    total += prices[i];

  }
  return total;
}
