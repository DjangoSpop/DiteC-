#include <iostream>


int main () {
int userinput;
//get the user input 
std::cout<<"enter amount please";
std::cin >> userinput;
if (userinput > 0) {
std::cout << "The number is negative "<<std::endl;

}
else if (userinput < 0)
{
    std::cout << "The number is postive"<<std::endl;
}else{
  std::cout<<"you entered zero"<<std::endl;

}
return 0 ;   
}