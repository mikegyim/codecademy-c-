//if (year is not divisible by 4) then (it is a common year)
//else if (year is not divisible by 100) then (it is a leap year)
//else if (year is not divisible by 400) then (it is a common year)
//else (it is a leap year) 

#include <iostream>
int main() {
  int year;
  std::cout << " Enter the year\n ";
  std::cin>> year;
  if(year<1000||year>9999)
  {
      std::cout << " Invalid year\n ";
      }

    else if(year% 4!=0) {
  std::cout << " not a leap year\n ";
  }
 else if(year% 100!=0)
  std::cout << " leap year\n ";
  else if(year% 400 !=0)
  {
    std::cout << " not leap year\n ";
  }

  else 
  {
    std::cout << " leap year\n ";
  }

  }
