/*
You just returned from a trip to South America. 
The countries you visited were Colombia, Brazil, and Peru. 
You arrived back in your country with some foreign currencies from these three countries.
Write a C++ program called currency.cpp that prompts the user for the amount of each foreign currency. 
/*


#include <iostream>

int main() {
  
 double pesos;
 double reais;
 double soles;
 double dollars;
std::cout<< " Enter number of Colombian Pesos: ";
 std::cin >> pesos;
 std::cout<< " Enter number of Brazilian Reais: ";
 std::cin >> reais;
 std::cout<< " Enter number of Peruvian Soles: ";
 std::cin>> soles;
dollars = (0.00032*pesos) + (0.27*reais) + (0.3*soles);
std::cout<< " Total US Dollars = $ " << dollars << "\n";
 return 0;
 
  
}
