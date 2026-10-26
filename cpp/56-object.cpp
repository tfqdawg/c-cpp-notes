/* 

  56. Objects = A collection of attributes and methods
              -> Can have characteristics and perform actions
              -> Can be used to mimic real world items (eg. Phone, Book)
              -> Created from class which acts as a blueprint

*/

#include <iostream>

class Car{
  public:
    std::string make;
    std::string model;
    int year;
    std::string color;

    // Methods: Functions that belongs to a class
    void accelerate(){
      std::cout << "You step on the gas!\n";
    }
    void brake(){
      std::cout << "You step on the brakes\n";
    }
};

int main(){

  Car car1;

  car1.make = "Ford";
  car1.model = "Mustang";
  car1.year = 2023;
  car1.color = "Silver";

  std::cout << car1.make << '\n';
  std::cout << car1.model<< '\n';
  std::cout << car1.year << '\n';
  std::cout << car1.color << '\n';

  car1.accelerate();
  car1.brake();


  return 0;
}
