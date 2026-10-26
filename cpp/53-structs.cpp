/*

  53. Structs
      -> A structure that group related variables under one name.
      -> variable in structs are known as "members".
      -> "Members" can be accessed with `.`: Class Member access operator

*/

#include <iostream>

struct student{
  std::string name;
  double gpa;
  bool enrolled;
};

int main(){
  
  student student1;
  student1.name = "Spongebob";
  student1.gpa = 3.2;
  student1.enrolled = true;

  student student2;
  student1.name = "Patrick";
  student1.gpa = 2.9;
  student1.enrolled = true;

  student student3;
  student1.name = "Squidward";
  student1.gpa = 1.9;
  student1.enrolled = false;

  std::cout << student1.name << '\n';
  std::cout << student1.gpa << '\n';
  std::cout << student1.enrolled << '\n\n';

  std::cout << student2.name << '\n';
  std::cout << student2.gpa << '\n';
  std::cout << student2.enrolled << '\n\n';

  std::cout << student3.name << '\n';
  std::cout << student3.gpa << '\n';
  std::cout << student3.enrolled << '\n\n';

  return 0;
}
