#include <stdio.h>
#include <math.h>

int main(){

  double principal = 0.0;
  double rate = 0.0;
  int years = 0;
  int timesCompunded = 0;
  double total = 0.0;

  printf("###########################\n");
  printf("Compund Interest Calculator\n");
  printf("###########################\n");

  printf("Enter the principle (P): ");
  scanf("%lf", &principal);

  printf("Enter the interest rate % (r): ");
  scanf("%lf", &rate);
  rate = rate / 100;

  printf("Enter the no. of years: ");
  scanf("%d", &years);

  printf("Enter no. of times compunded per year (n): ");
  scanf("%d", &timesCompunded);

  total = principal * pow(1 + rate/timesCompunded, timesCompunded * years);

  printf("After %d years, the total will be $%.2lf", years, total);

  return 0;
}
