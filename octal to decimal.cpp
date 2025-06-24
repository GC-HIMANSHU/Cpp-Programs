#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int octalNumber = 67;
    int decimalNumber = 0;
    int power = 0;

    int temp = octalNumber;
    while (temp > 0) {
        int digit = temp % 10;
        decimalNumber += digit * pow(8, power);
        temp /= 10;
        power++;
    }

    cout << "Decimal equivalent is: " << decimalNumber << endl;

    return 0;
}
