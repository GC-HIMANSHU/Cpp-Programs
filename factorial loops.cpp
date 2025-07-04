// C++ program to find factorial using loops
#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    while (n > 1) {
        fact *= n;
        n--;
    }
    return fact;
}

int main() {
    int num = 5;
    cout << "Factorial of " << num << " is: " << factorial(num);
    return 0;
}
