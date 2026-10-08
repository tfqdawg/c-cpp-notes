/*
  -> Display a custom message based on letter gradeentered by user
*/
#include <iostream>

int main(){

  char grade;
  std::cout << "Grade: ";
  std::cin >> grade;
  
  swtich(){
    case 'A':
      std::cout << "Great!";
      break;
    case 'B':
      std::cout << "Good!";
      break;
    case 'C':
      std::cout << "Okay!";
      break;
    case 'D':
      std::cout << "Better next time!";
      break;
    case 'F':
      std::cout << "Failed";
      break;
    default:
      std::cout << "Letter grades only (A-F)!";
  }

  return 0;
}
