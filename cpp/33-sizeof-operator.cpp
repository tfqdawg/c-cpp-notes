/*
  -> `sizeof()`
      - determines the size of bytes of a: variables, data type, class, objects, etc.
*/

#include <iostream>

int main(){
  std::string name = "Vro";
  double gpa = 2.5;
  char grade = 'F';
  bool student = true;
  char grades[] = { 'A', 'B', 'C', 'D', 'E', 'F'};
  std::string students[] = { "Spongebob", "Patrick", "Squidward" };

  std::cout << sizeof(name) << " bytes\n";
  std::cout << sizeof(gpa) << " bytes\n";
  std::cout << sizeof(grade) << " bytes\n";
  std::cout << sizeof(grades) << " bytes\n";
  std::cout << "Array has " << sizeof(grades) / sizeof(char) << " elements\n";
  std::cout << "Array has " << sizeof(students) / sizeof(std::string) << " students\n";

  return 0;
}
