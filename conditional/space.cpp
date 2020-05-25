/*John is an interplanetary space boxer, who is trying to win championship belts for various weight categories on other planets within the solar system.

Write a space.cpp program that helps him keep track of his target weight by:

It should ask him what his earth weight is.
Ask him to enter a number for the planet he wants to fight on.
It should then compute his weight on the destination planet.
Here is the table of conversion
#	Planet	Relative Gravity
1	Venus	0.78
2	Mars	0.39
3	Jupiter	2.65
4	Saturn	1.17
5	Uranus	1.05
6	Neptune	1.23
*/
#include <iostream>
int main() {
  //Declare his earth weight
  double weight;
  std::cout << " Enter your earth weight\n ";
  std::cin >> weight;
  int planet_number;
  std::cout << " Enter a number for the planet you wants to fight on\n " ;
  std::cin >> planet_number;
  if(planet_number ==1)
  {
    std::cout << " Planet = Venus and relative gravity = 0.78\n ";
    std:: cout << " Planet Weight =  " << 0.78*weight << "\n";
}
if(planet_number==2)
{
  std::cout << " Planet =  Mars and relative gravity = 0.39\n ";
  std::cout << " Planet weight = " << 0.39*weight << "\n";
}
if(planet_number==3) {
  std::cout << " Planet = Jupiter and relative gravity = 2.65\n ";
  std::cout << " Planet weight = " << 2.65*weight << "\n";
}
  if(planet_number==4) {
  std::cout << " Planet = Saturn and relative gravity = 1.17\n ";
  std::cout << " Planet weight = " << 1.17*weight << "\n";
}
if(planet_number==5) {
  std::cout << " Planet = Uranus and relative gravity = 1.05\n ";
  std::cout << " Planet weight = " << 1.05*weight << "\n";
}
  if(planet_number==6) {
  std::cout << " Planet = Neptune and relative gravity = 1.23\n ";
  std::cout << " Planet weight = " << 1.23*weight << "\n";
}

return 0;  

  }
