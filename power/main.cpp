#include <iostream>

int power(int b, int e){
  int result=1;

  for (int i = 1; i <= e; i++){
    int aux = result*b;
    result = aux;
  }

  return result;
}

int main(){
  int a, b;
  
  std::cout << "Type base value >> "; std::cin >> a;
  std::cout << "Type exponent value >> "; std::cin >> b;
    
  std::cout << "El resultado de la potencia es >> " << power(a, b) << std::endl;

  return 0;
}
