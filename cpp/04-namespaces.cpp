  /*
    -> solution to prevent name conflicts.
    -> in large projects, each entity needs a name.
    -> namespace allows for identically named entities as long namespace are different.
    -> create namespaces before `int main(){}`
  */

#include <iostream>

namespace first{
  int x = 1;
}
namespace second{
  int x = 2;
}

int main(){
  
  int x = 0;
  
  // manual output printing
  // alternatively, for example, can use `using namespace first`, the we can omit `first::x`
    std::cout << first::x << '\n';
    std::cout << second::x << '\n';
    std::cout << x << '\n';

  return 0;
}
