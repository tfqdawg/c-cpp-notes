/*

  60. Inheritance: A class that can receive attributes and methods from another class
                  -> Children classes inherit from a Parent class
                  -> Helps to reuse similar code found within multiple classes

*/

#include <iostream>

class Animal{ // Parent Class
  public:
    bool alive = true;

  void eat(){
    std::cout << "This animal is eating\n";
  }
};

class Dog : public Animal{ // inherit from parent class
  public:

    void Bark(){
      std::cout << "Dog goes Woof!" << '\n';
    }
};

class Cat : public Animal{ // inherit from parent class
  public:
    void Meow(){
      std::cout << "The cat goes Meow!" << '\n';
    }
};

int main(){

  Dog dog;
  Cat cat;

  // std::cout << dog.alive << '\n';
  // dog.eat();
  // dog.Bark();

  std::cout << cat.alive << '\n';
  cat.eat();
  cat.Meow();

  return 0;
}
