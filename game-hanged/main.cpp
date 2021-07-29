#include <iostream>

int main(){
  
  // Constants
  const std::string word = "amogos";
  const int word_size = word.length();
  
  char array_underscores[word_size];
 
  char guess;

  for (int i = 0; i < word_size; i++){
    array_underscores[i] = '_';
  }

  
  int tries = 0;
  bool found = false;
  std::cout << "the word has " << word_size << " characters" << std::endl;
  
  do{

    for (int i = 0; i < word_size; i++){
      std::cout << array_underscores[i] << " ";
    }
    
    std::cout << std::endl;

    std::cout << "Guess the word! >> "; std::cin >> guess;
    
    for (int i = 0; i < word_size; i++){
      
      if (word[i] == guess and array_underscores[i] != guess){
        array_underscores[i] = guess;

        std::cout << "Correct!";
      }
    }
    std::cout << tries << " tries";

    std::string final_guess;

    for (int i = 0; i < word_size; i++){
      final_guess += array_underscores[i];
    }
    

    if (final_guess == word){
      found = true;
    }
    
    
    std::cout << std::endl;
    
    tries += 1;


  }while(!found && tries <= 12);
  
  if (!found){
    std::cout << "You lost the game" << std::endl;
    return 0;
  }

  else {
    std::cout << "You won the game! " 
      << "Your attempts: " << tries
      << "\nWord: " << word << std::endl;

    return 0;
  }

  return 0;
}
