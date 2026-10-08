// Convert temperatrue from farenheit to celsius and vice versa.

#include <iostream>

int main(){

  double temp;
  char unit;

  std::cout << "***** Temperature Conversion *****\n";
  std::cout << "F = Farenheit\n";
  std::cout << "C = Celsius\n";
  std::cout << "Convert to?: ";
  std::cin >> unit;

  if(unit == 'F' || unit == 'f'){
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> temp;

    temp = (1.8 * temp) + 32.0;
    std::cout << "Temperature: " << temp << " F\n";
  }
  else if(unit == 'C' || unit == 'c'){
    std::cout << "Enter temperature in Farenheit: ";
    std::cin >> temp;
    
    temp = (temp - 32) / 1.8;
    std::cout << "Temperature: " << temp << "C\n";
  }
  else{
    std::cout << "Please enter only C or F!\n";
  }

  std::cout << "**********************************";

  return 0;
}
