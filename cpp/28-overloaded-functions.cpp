// Functions that share the same name, but different set of parameters.

#include <iostream>

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main(){
  bakePizza("pepperoni", "mushrooms");

  return 0;
}

void bakePizza(){
  std::cout << "Here is your Pizza!\n";
}

void bakePizza(std::string topping1){
  std::cout << "Here is your " << topping1 << " Pizza!\n";
}

void bakePizza(std::string topping1, std::string topping2){
  std::cout << "Here is your " << topping1 << " and " << topping2 << " Pizza!\n";
}
