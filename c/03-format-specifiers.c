/*

  -> Special symbols beginning with `%` symbol
  -> Followed by character that specifies the data type
  -> Also Followed by optional modifiers (width, precision, flags, etc.)
  -> Controls how the data is displayed or interpreted. 

*/

#include <stdio.h>

int main(){
  
  int age = 24;
  float price = 19.99;
  double pi = 3.1415926535;
  char currency = '$';
  char name[] = "Taufiq";

  /*

    -> To format outputs,

    -> width : format for minimum numbers of characters to print
        `printf("%3d\n", num);` -- spaces before
        `printf("%-3d\n", num);` -- spaces after
        `printf("%-3d\n", num);` -- precede with zero
        `printf("%+3d\n", num);` -- show number symbol (+ve/-ve)

    -> precision : format how many decimal places
        `printf("%.2f\n", price);` -- Print 2 decimal places

  */

  printf("%d\n", age);
  printf("%f\n", price);
  printf("%f\n", pi); // can either use `%f` or `%lf`
  printf("%c\n", currency);
  printf("%s\n", name);

  return 0;
}
