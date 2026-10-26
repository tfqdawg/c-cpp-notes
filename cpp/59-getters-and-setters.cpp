/*

   59. Getters & Setters:
  -> Abstraction: hiding unnecessary data from outside a class
  -> Getter: function that makes a private attribute READABLE
  -> Setter: function that makes a private attribute WRITABLE

*/

#include <iostream>

class Stove{
  private:
    int temperature = 0;
  public:
    Stove(int temperature){
      setTemperature(temperature);
    }
    int getTemperature(){ // Getter function to access private attribute
      return temperature;
    }
    void setTemperature(int temperature){ // Setter function to access private attribute
      if(temperature < 0){
        this->temperature = 0;
      }
      else if(temperature >= 10){
        this->temperature = 10;
      }
      else {
        this->temperature = temperature;
      }
    }
};

int main(){

  Stove stove(0);

  // stove.temperature = 1000000;
  stove.setTemperature(1000000);

  std::cout << "The Temperature Settings is: " << stove.getTemperature();

  return 0;
}
