// Program to check if a number is even or odd
#include <iostream>

bool isEven(int n) {
    return n % 2 == 0;
}

int main() {
    int n = 247;  // Example number

    if (isEven(n)) {
        std::cout << n << " is Even" << std::endl;
    } else {
        std::cout << n << " is Odd" << std::endl;
    }

    return 0;
}
