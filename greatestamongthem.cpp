// Program to find the greatest among three numbers
#include <iostream>

int main() {
    int a = 10, b = 20, c = 30;  
    std::cout << "The greatest among three numbers is: ";

    if (a >= b && a >= c) {
        std::cout << a << std::endl;
    } else if (b >= a && b >= c) {
        std::cout << b << std::endl;
    } else {
        std::cout << c << std::endl;
    }

    return 0;
}
