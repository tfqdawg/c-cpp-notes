/*

  58. Overloaded Constructors
      -> Constructors that have the same name, but different parameters when instantiating an object

*/

#include <iostream>
#include <string>

class Pizza{
  public:
    std::string topping1;
    std::string topping2;

  Pizza(){
  }
  Pizza(std::string topping1){
    this->topping1 = topping1;
  }
  Pizza(std::string topping1, std::string topping2){ // 2 arguments
    this->topping1 = topping1;
  }
};

int main(){

  Pizza pizza1("Pepperoni");
  Pizza pizza2("Mushrooms", "Peppers");
  Pizza pizza3;

  std::cout << pizza1.topping1 << '\n';
  std::cout << pizza1.topping2<< '\n';

  return 0;
}
