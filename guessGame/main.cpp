#include <iostream>

int main(){
    int secretNum = 15;
    int guess;
    int attempts=0;

    do{
      if (attempts == 5){
        std::cout << "You ran out of attempts!" << std::endl;
        return 0;
      }
      attempts++;  
      std::cout << "Attempt n." << attempts << ">> Write down your guess!: >> "; std::cin >> guess;

      if (guess > secretNum){
        std::cout << "Close one! your guess is higher than the secret number" << std::endl;
      } else if (guess < secretNum){
        std::cout << "Close one! your gues is lower than the secret number" << std::endl;
      }
      

    }while(secretNum != guess);

    std::cout << "You won the game!" << std::endl;

    return 0;
}
