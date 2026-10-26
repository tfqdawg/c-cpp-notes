// Funtions: a block of reusable code

#include <iostream>

void happyBirthday(std::string name, int age); // declare functions here so we can have the function below `int main()`, also include variable type as parameter

int main(){ 
  std::string name = "Taufiq";
  int age = 24;

  // invoke other funtions in int main()
  // example: 3 verses of happy birthday
  happyBirthday(name, age); // place variable name as argument, so the function is aware of it

  return 0;
}

void happyBirthday(std::string name, int age){ // add the necessary variable declaration in `int main()` so it can be used in other functions 
  std::cout << "Happy Birthday to you!\n";
  std::cout << "Happy Birthday to you!\n";
  std::cout << "Happy Birthday to you!\n";
  std::cout << "Happy Birthday to " << name << '\n';
  std::cout << "Happy Birthday to you!\n";
  std::cout << "You are " << age << " years old now!\n";
}
