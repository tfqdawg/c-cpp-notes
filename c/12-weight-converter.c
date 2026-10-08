#include <stdio.h>

int main(){
  
  int choice =0;
  float pounds = 0.0f;
  float kilograms = 0.0f;

  printf("############################\n");
  printf("Weight Conversion Calculator\n");
  printf("############################\n");
  printf("1. Kilograms to Pounds\n");
  printf("2. Pounds to Kilograms\n");
  printf("Enter your choice (1 or 2): ");
  scanf("%d", &choice);

  if(choice == 1){
    // kilograms -> Pounds
    printf("Enter your weight in kilograms: ");
    scanf("%f", &kilograms);
    pounds = kilograms * 2.20462;
    printf("%.2f Kilograms is equal to %.2f pounds\n", kilograms, pounds);
  }
  else if (choice == 2){
    // Pounds -> Kilograms
    printf("Enter your weight in pounds: ");
    scanf("%f", &pounds);
    kilograms = pounds / 2.20462;
    printf("%.2f pounds is equal to %.2f kilograms\n", pounds, kilograms);
  }
  else {
    printf("Invalid Choice!");
  }

  return 0;
}
