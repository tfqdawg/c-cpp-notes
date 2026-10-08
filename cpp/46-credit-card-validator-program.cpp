/*
  46. Credit Card Validator Program
     
    using Luhn's Algorithm
      1. Double every second digit from right to left if doubled number is 2 digits, split them
      2. Add all single digits from step 1
      3. Add all odd numbered digits from right to left
      4. Sum results from steps 2 & 3
      5. If step 4 is divisible by 10, # is valid

      for this example, we use the credit card number "6011000990139424"
      [6011] [0009] [9013] [9424]
      [61] [00] [91] [92] -> only concerned with every second digit from right to left
      [1 2 2] [0 0] [1 8 2] [1 8 4] -> double all the single digits, if doubled it 2 digits, split them
      [ 29 ] -> all numbers was added to create a sum
      [ 21 ] -> odd numbers was added from right to left from the original numbers
      [ 50 ] => sum the created sums
      [ 0 ] => results from 50 % 10, it is divisible by 10, so number is valid.
*/

#include <iostream>
#include <string>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber); // string can be treated as an array of value
int sumEvenDigits(const std::string cardNumber);

int main(){
  std::string cardNumber;
  int result = 0;

  std::cout << "Enter a credit card Number: ";
  std::cin >> cardNumber;

  result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

  if (result % 10 == 0){
    std::cout << cardNumber << " is valid!";
  }
  else {
    std::cout << cardNumber << "is not valid!";
  }

  return 0;
}

int getDigit(const int number){
  return number % 10 + (number / 10 % 10);
}

int sumOddDigits(const std::string cardNumber){

  int sum = 0;

  for(int i = cardNumber.size() - 1; i >= 0; i-=2){
    sum += cardNumber[i] - '0';
  }
  return sum;
}

int sumEvenDigits(const std::string cardNumber){

  int sum = 0;

  for(int i = cardNumber.size() - 2; i >= 0; i-=2){
    sum += getDigit((cardNumber[i] - '0') * 2);
  }
  return sum;
}
