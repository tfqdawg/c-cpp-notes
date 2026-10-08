/*
  -> return value to the spot where we called the encompassing function.
*/

#include <iostream>

// in the place of `void`, it has to match the data type to be returned.
double square(double length);
double cube(double length);

int main(){
  double length = 6.0; 
  double area = square(length); //invoke function for area
  double volume = cube(length); // invoke function for volume

  std::cout << "Area of Cube: " <<  area << "cm^2\n";
  std::cout << "Volume of Cube: " <<  volume << "cm^3\n";  

  return 0;
}

// in the place of `void`, it has to match the data type to be returned.
// function to calculate area for square
double square(double length){ 
  return length * length;
}

double cube(double length){
  return length * length * length;
}
