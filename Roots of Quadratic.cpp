#include <iostream>
#include <cmath>
using namespace std;

void findRoots(int a, int b, int c) {
    if (a == 0) {
        cout << "Invalid";
        return;
    }

    int d = b * b - 4 * a * c;
    double sqrt_val = sqrt(abs(d));

    if (d > 0) {
        cout << "Roots are real and different\n";
        cout << (-b + sqrt_val) / (2 * a) << "\n"
             << (-b - sqrt_val) / (2 * a);
    }
    else if (d == 0) {
        cout << "Roots are real and same\n";
        cout << -(double)b / (2 * a);
    }
    else {
        cout << "Roots are complex\n";
        cout << -(double)b / (2 * a) << " + i" << sqrt_val / (2 * a) << "\n"
             << -(double)b / (2 * a) << " - i" << sqrt_val / (2 * a);
    }
}

int main() {
    int a = 1, b = 4, c = 4;
    findRoots(a, b, c);
    return 0;
}









