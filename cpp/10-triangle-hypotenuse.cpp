#include <iostream>
#include <cmath>

int main(){
  double a;
  double b;
  double c;

  std::cout << "enter side a: ";
  std::cin >> a;

  std::cout << "enter side b: ";
  std::cin >> b;

  c = sqrt(pow(a, 2) + pow(b, 2));

  std::cout << "Hypotenuse: " << c << " units";

  return 0;
}
