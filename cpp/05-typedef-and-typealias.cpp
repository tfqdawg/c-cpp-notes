/*
-> typedef = reserved keyword used to create additional items
-> typealias = reserved keyword used to create additional data types
-> Acts as new identifier for an existing type
-> helps with readability and reduces typos
-> recommended to use `using` instead of typedef
*/

#include <iostream>
#include <vector>

// below is a really long data type, but we give it an alias using `typedef [datatype] [alias_t]` as below,
// typedef std::vector<std::pair<std::string, int>> pairlist_t

// typedef std::string text_t
// typedef int number_t;

// alternatively, can use `using`
using text_t std::string;
using number_t = int;

int main(){
  // call typedef inside main function
    // pairlist_t pairlist;

    text_t firstName = "Vro";
    number_t age = 24;

    std::cout << firstName << '\n';
    std::cout << age << '\n';

  return 0;
}
