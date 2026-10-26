/*

  structs.
    => A custom container that holds multiple pieces of related information.
    => Similar to objects in other languages.

*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct{
  char name[50];
  int age;
  float gpa;
  bool isFullTime;
}Student;

void printStudent(Student student);

int main(){

  Student student1 = {"Spongebob", 30, 2.5, true};
  Student student2 = {"Patrick", 36, 1.0, false};
  Student student3 = {"Squidward", 48, 3.2, false};
  Student student4 = {0}; // assign later

  // manually assign struct members.
  strcpy(student4.name, "Sandy");
  student4.age = 27;
  student4.gpa = 4.0;
  student4.isFullTime = true;

  // Spongebob
  printf("%s\n", student1.name); // `.` -> member access operator.
  printf("%d\n", student1.age);
  printf("%.2f\n", student1.gpa);
  printf("%s\n", (student1.isFullTime) ? "Yes." : "No.");

  // Patrick
  printf("%s\n", student2.name); // `.` -> member access operator.
  printf("%d\n", student2.age);
  printf("%.2f\n", student2.gpa);
  printf("%s\n", (student2.isFullTime) ? "Yes." : "No.");
  
  // Squidward
  printf("%s\n", student3.name); // `.` -> member access operator.
  printf("%d\n", student3.age);
  printf("%.2f\n", student3.gpa);
  printf("%s\n", (student3.isFullTime) ? "Yes." : "No.");
  
  printStudent(student1);
  printStudent(student2);
  printStudent(student3);
  printStudent(student4);

  return 0;
}

void printStudent(Student student){
  printf("Name: %s\n", student.name);
  printf("Age: %d\n", student.age);
  printf("GPA: %.2f\n", student.gpa);
  printf("Full-Time: %s\n", (student.isFullTime) ? "Yes." : "No.");
  printf("\n");
}
