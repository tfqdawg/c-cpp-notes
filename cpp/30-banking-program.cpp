#include <iostream>
#include <iomanip> // header for function for setting precision for floating point numbers

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
  double balance = 0;
  int choice = 0;

  do{

    std::cout << "-------------------\n";
    std::cout << " Enter you Choice: \n";
    std::cout << "-------------------\n";
    std::cout << "1. Show Balance\n";
    std::cout << "2. Deposit Money\n";
    std::cout << "3. Withdraw Money\n";
    std::cout << "4. Exit\n";
    std::cin >> choice;

    std::cin.clear(); // clear input buffers
    fflush(stdin);
  
    switch(choice){
      case 1: showBalance(balance);
              break;
      case 2: balance += deposit();
              showBalance(balance);
              break;
      case 3: balance -= withdraw(balance);
              showBalance(balance);
              break;
      case 4: std::cout << "Thank you for banking with us!";
              break;
      default: std::cout << "Invalid Choice\n";
    }
  }while(choice != 4);

  return 0;
}

void showBalance(double balance){
  std::cout << "Your Balance is: $" << std::setprecision(2) << std::fixed << balance << '\n';
}

double deposit(){

  double amount = 0;

  std::cout << "Amount to deposit: ";
  std::cin >> amount;

  if(amount > 0){
    return amount;
  }
  else{
    std::cout << "That's not a valid amount!\n";
    return 0;
  }

  return amount;
}

double withdraw(double balance){
  double amount;

  std::cout << "enter amount to withdraw: ";
  std::cin >> amount;

  if(amount > balance){
    std::cout << "Insufficient Funds\n";
    return 0;
  }
  else if(amount < 0){

    std::cout << "Not a valid amount!\n";
  }
  else{
    return amount;
  }

  return 0;
}
