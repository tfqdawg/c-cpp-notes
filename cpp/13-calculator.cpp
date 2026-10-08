#include <iostream>

int main(){
  
  char op;
  double num1;
  double num2;
  double result;

  std::cout << "********** Calculator **********\n";
  
  std::cout << "Enter operator (+, -, *, /): ";
  std::cin >> op;
  
  std::cout << "Enter 1st number: ";
  std::cin >> num1;

  std::cout << "Enter 2nd number: ";
  std::cin >> num2;

  switch(op){
    case '+':
      result = num1 + num2;
      std::cout << "results: " << result << '\n';
      break;
    case '-':
      result = num1 - num2;
      std::cout << "results: " << result << '\n';
      break;
    case '*':
      result = num1 * num2;
      std::cout << "results: " << result << '\n';
      break;
    case '/':
      result = num1 / num2;
      std::cout << "results: " << result << '\n';
      break;
    default:
      std::cout << "Not a valid operator!";
  }

  std::cout << "********************************";

  return 0;
}
