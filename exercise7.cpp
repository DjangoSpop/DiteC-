//write a program for a calculator that can add, subtract, multiply, and divide, and then display the results. The program should ask for two values, then an operator. It should then perform the calculation and display the result. (Note: if the user enters an invalid operator, the program should print nothing.)

//interaction with the user might be like enter your fractuinall exppression 1+2 the result = 3 
//the user allowed to do only one operation at a time
//the user can enter the expression in any order he wants



#include <iostream>
#include <math.h>
using namespace std;

int main () {
int num1, num2;
char operation;

cout << "Enter the first number: ";
std::cin >> num1;
std::cout << "Enter the second number: ";
std::cin >> num2;
std::cout << "Enter the operation: ";
std::cin >> operation;
 

if (operation == '+') {
    std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
} else if (operation == '-') {
    std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
} else if (operation == '*') {
    std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
} else if (operation == '/') {
    std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
} else {
    std::cout << "Invalid operation" << std::endl;


}
return 0;
}