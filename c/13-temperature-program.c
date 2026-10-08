#include <stdio.h>

int main(){
  
  char choice = '\0';
  float fahrenheit = 0.0f;
  float celsius = 0.0f;

  printf("******************************\n");
  printf("Temperature Conversion Program\n");
  printf("******************************\n");
  printf("C. Celsius to Fahrenheit\n");
  printf("F. Fahrenheit to Celsius\n");
  printf("Is the temp is Celsius(C) or Fahrenheit (F)?: ");
  scanf("%c", &choice);

  if(choice == 'C'){
    // C to F
    printf("Enter the temperature in celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.1f celsius is equals to %.1f farenheit", celsius, fahrenheit);
  }
  else if(choice == 'F'){
    // F to C
    printf("enter the temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("%.1f fahrenheit is equals to %.1f celsius", fahrenheit, celsius);

  }
  else {
    printf("Invaid Choice!");
  }

  return 0;
}
