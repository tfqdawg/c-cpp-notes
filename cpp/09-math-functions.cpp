#include <iostream>
#include <cmath> // header for additional math functions
                 // refer https://www.cplusplus.com/reference/cmath/

int main(){
  double x =3.14;
  double y = 4;
  double z;

  // max function
    z = std::max(x, y);

  // min function
    z = std::min(x, y);

  // power function
    z = pow(2, 3);

  // square root
    z = sqrt(9);

  // absolute value
    z = abs(-3);
  
  // round function
    z = round(x);

  // round-up function
    z = ceil(x);
  
  std::cout << z;

  return 0;
}
