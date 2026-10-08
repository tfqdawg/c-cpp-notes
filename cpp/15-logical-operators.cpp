/*
  -> AND, && : check if two conditions are true 
  -> OR, || : check if at least one condition is true
  -> NOT, ! : reverses the logical state of its operand
*/

#include <iostream>

int main(){
  // prompt user for temperature (in celsius), and check if it falls within certain range.
  double temp;
  bool sunny;
  std::cout << "Enter temperature (Celsius): ";
  std::cin >> temp;

  //AND operator 
  if(temp > 0 && temp < 30){
    std::cout << "Temperature is good!";
  }
  else{
    std::cout << "Temperature is bad!";
  }
 
  // OR operator
  if(temp <= 0 || temp >= 30){
    std::cout << "Temperature is bad!";
  }
  else{
    std::cout << "Temperature is good!";
  }

  // NOT operator
  if(sunny){ // or (!sunny), then reverse output
    std::cout << "It's sunny outside";
  }
  else{
    std::cout << "It's clousy outside";
  }

  return 0;
}
