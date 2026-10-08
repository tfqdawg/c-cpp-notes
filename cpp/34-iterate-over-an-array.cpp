#include <iostream>

int main(){
  
  // EXAMPLE 1
  std::string students [] = { "Spongebob", "Patrick", "Squidward" };

  for(int i = 0; i < sizeof(students) / sizeof(std::string); i++){
    std::cout << students[i] << '\n';
  }

  // EXAMPLE 2
  char grades[] = {'A', 'B', 'C', 'D', 'F'};

  for(int i = 0; i < sizeof(grades) / sizeof(char); i++){
    std::cout << grades[i] << '\n';
  }

  return 0;
}
