// Simple program to check if a number is positive or negative

#include <iostream>

int main() {
    int number = -100;  
    if (number >= 0) {
        std::cout << number << " is a positive number." << std::endl;
    } else {
        std::cout << number << " is a negative number." << std::endl;
    }

    return 0;
}
