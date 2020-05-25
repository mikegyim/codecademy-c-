#include <iostream>
#include <cmath>

int main() {
  
  double x_1;
  double x_2;
  double    a,
            b,
            c;
            
            std::cout << " Enter the value of a: " ;
            std::cin >> a;
            std::cout << " Enter the value of b: " ;
            std:: cin >> b;
            std::cout << " Enter the value of c: ";
            std::cin >> c;
           

x_1 = (-b + std::sqrt(b*b-4*a*c))/(2*a);
x_2 = (-b - std::sqrt(b*b-4*a*c ))/(2*a);

std::cout << "root1 is " << x_1 << "\n";
std::cout << "root2 is " << x_2 << "\n";
return 0;
  
}