#include <iostream>

int main() {
    int lowerBound, upperBound, queriedNumber;

  
    std::cout << "Enter the lower bound of the range: ";
    std::cin >> lowerBound;

    std::cout << "Enter the upper bound of the range: ";
    std::cin >> upperBound;

   
    std::cout << "Enter the number to be queried: ";
    std::cin >> queriedNumber;

   
    if (queriedNumber >= lowerBound && queriedNumber <= upperBound) {
       
        std::cout << "In range" << std::endl;
    } else {
       
        std::cout << "Not in range" << std::endl;
    }

    return 0;
}
