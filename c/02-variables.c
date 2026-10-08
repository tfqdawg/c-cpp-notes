#include <stdio.h>
#include <stdbool.h>

int main(){

  // 1. Integer
    int age = 25;
    int year = 2025;
    int quantity = 1;

    printf("You are %d years old!\n", age);
    printf("The year is %d\n", year);
    printf("You have ordered %d x items", quantity);

  // 2. Float
    float gpa = 2.5;
    float price = 19.99;
    float temperature = -10.1;

    printf("your gpa is %f\n", gpa);
    printf("The price is %f\n", price);
    printf("The temperature is %f\n", temperature);

  // 3. Double
    double pi = 3.14159;
    double e = 2.718282;

    printf("The value of pi is %.15lf", pi);
    printf("The value of e is %.15lf", e);

  // 4. Char
    char grade = 'A';
    char symbol = '!';
    char currency = '$';

    printf("Your grade is %c\n", grade);
    printf("Your favourite symbol is %c\n", symbol);
    printf("The currency is %c\n", currency);

  // 5. Strings (in C, there are no strings, so we use an array to represent strings.)
    char name[] = "Taufiq Haikal";
    char food[] = "Pizza";
    char email[] = "fake123@gmail.com";

    printf("Hello %s\n", name);
    printf("Your favourite food is %s\n", food);
    printf("Your email is %s\n", email);

  // 6. Boolean (need to include `stdbool.h` header file)
    bool isOnline = true; // Or cooresponds to 1 or 0 respectively.

    printf("%d", isOnline);

  return 0;
}
