//A program to swap the values of two integers using third variable.
#include <iostream>
using namespace std;


int main (){

int num1,num2,temp;

cout<<"enter the first number"<<endl;
cin>>num1;
cout<<"enter the second number"<<endl;
cin>>num2;

if (num1 > num2){
temp = num1;
num1 = num2;
num2 = temp;
cout<<"the first number is "<<num1<<endl;
cout<<"the second number is "<<num2<<endl;
}
else if (num1 < num2){
temp = num2;
num2 = num1;
num1 = temp;
cout<<"the first number is "<<num1<<endl;
cout<<"the second number is "<<num2<<endl;
}
else{
cout<<"the numbers are equal"<<endl;


}

return 0;
}
