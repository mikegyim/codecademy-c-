/*Write a magic8.cpp program that will output a random fortune each time it executes. */
#include<iostream>
#include<cstdlib>
int main()
{
 
  std::cout << " MA 8-BALL: " << "\n\n"; //double\n to output extra new line
  //Without srand(time(NULL)), we will keep getting the same number(answer)
 srand(time(NULL)); // to get a different random number for each execution
 //create an int variable named answer and set it equal to a random number 
int answer = std::rand() % 11;
std::cout << answer;
if(answer ==0) {
  std::cout <<" It is certain. \n ";
}
else if(answer== 1) {
  std::cout << " It is decidedly so.\n ";
}
else if(answer==2) {
  std::cout <<" Without a doubt.\n ";
}
else if(answer==3) {
  std::cout <<" Yes - definitely.\n ";
}
else if(answer==4) {
  std::cout <<" You may rely on it.\n " ;
}
else if(answer==5) {
  std::cout <<" As I see it, yes.\n ";
}
else if(answer==6) {
  std::cout <<" Most likely\n ";
}
else if(answer==7) {
  std::cout <<" Outlook good.\n ";
}
else if(answer==8) {
  std::cout <<" Yes.\n ";
}
else if(answer==9) {
  std::cout <<" Signs point to yes.\n ";
}
else if(answer==10) {
  std::cout <<" Reply hazy, try again.\n ";
}

else{
std::cout <<" Very doubtful.\n ";
}
}
