/*
  -> convert one data type to another
  -> implicit = automatic
  -> explicit = percede value with new data type
*/

#include <iostream>

int main(){
  // example 1
    // 3.14 is not a whole number
    double = (int) 3.14; // convert 3.14 into integer, ans store it in double type

  // example 2
    char x = 100; // since we declare a char, it will look in ASCII table for the equivalent for `100`.

  /*
    Example:
    Suppose in an online exam, check how much the user get correct / no. of total questions
  */
  int correct = 8;
  int questions = 10;
  double score = correct / (double)questions * 100;
  std::cout << score << "%";

  return 0;
}
