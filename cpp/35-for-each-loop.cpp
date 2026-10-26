/*
  -> For each loops: loop that eases traversal over an iterable data set.
  -> less flexible thn regular for loops
*/
#include <iostream>

int main(){

  // Example 1
  std::string student[] = {"Spongebob", "Patrick", "Squidward" };

  for(std::string students : students){
    std::cout << student << '\n';
  }

  // Example 2
  int grades [] = { 65, 72, 81, 93 };

  for(int grade : grades){
    std::cout << grade << '\n';
  }

  return 0;
}
