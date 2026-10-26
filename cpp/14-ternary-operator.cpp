/*
  -> a replavement to if/else statement
  -> condition ? expression1 : expression2;
*/

#include <iostream>

int main(){
  // example 1: input a score, retrun pass or fail.
    int score;
    std::cout << "Enter Score: ";
    std::cin >> score;

    score >= 60 ? std::cout << "Pass!\n" : std::cout << "Fail!\n";

  // example 2: check if number is even/odd
    int number;
    std::cout << "Enter Number: ";
    std::cin >> number;

    number % 2 == 1 ? std::cout << "Odd Number" : std::cout << "Even Number";

  // example 3: examine bool variable to determine if somebody is hungry
    bool hungry = true;

    hungry ? std::cout << "You are hungry" : std::cout << "You are full";

    // alt form
    // std::cout << (hungry ? "You are hungry" : "You are Full");

  return 0;
}
