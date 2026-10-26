#include <iostream>
#include <ctime>

char getUserChoice();
char getCompChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
  char player;
  char computer;

  player = getUserChoice();
  std::cout << "Your choice: ";
  showChoice(player);

  computer = getCompChoice();
  std::cout << "Computer Choice: ";
  showChoice(computer);

  chooseWinner(player, computer);
  return 0;
}

char getUserChoice(){
  char player;
  std::cout << "*****************************************\n";
  std::cout << "******* Rock-Paper-Scissors Game! *******\n";
  std::cout << "*****************************************\n";
  
  do{
  std::cout << "Your Choice?\n";
  std::cout << "'r' - Rock\n";
  std::cout << "'p' - Paper\n";
  std::cout << "'s' - scissors\n";
  std::cin >> player;
  }while(player != 'r' && player != 'p' && player != 's');

  return player;
}

char getCompChoice(){
  srand(time(0));
  int num = (rand() % 3 + 1);
  
  switch(num){ // if we are returning a value in switch statements, no need to break;
    case 1: return 'r';
    case 2: return 'p';
    case 3: return 's';
  }
  return 0;
}

void showChoice(char choice){
  switch(choice){
    case 'r': std::cout << "Rock\n";
              break;
    case 'p': std::cout << "Paper\n";
              break;
    case 's': std::cout << "Scissors\n";
              break;
  }
}

void chooseWinner(char player, char computer){
  switch(player){
    case 'r': if(computer == 'r'){
                std::cout << "Tie!\n";
              }
              else if(computer == 'p'){
                std::cout << "You Lose!\n";
              }
              else{
                std::cout << "You Win!";
              }
              break;
    case 'p': if(computer == 'r'){
                std::cout << "You Win!\n";
              }
              else if(computer == 'p'){
                std::cout << "Tie!\n";
              }
              else{
                std::cout << "You Lose!";
              }
              break;
    case 's': if(computer == 'r'){
                std::cout << "You Lose!\n";
              }
              else if(computer == 'p'){
                std::cout << "You Win!\n";
              }
              else{
                std::cout << "Tie!";
              }
              break;
  }
}
