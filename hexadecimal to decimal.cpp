// C++ Program to convert hexadecimal to decimal
#include <iostream>
#include <cmath>
using namespace std;

int hexToDec(char ch) {
    if (ch >= '0' && ch <= '9')
        return ch - '0';
    if (ch >= 'A' && ch <= 'F')
        return ch - 'A' + 10;
    if (ch >= 'a' && ch <= 'f')
        return ch - 'a' + 10;
    return -1;
}

int main() {
    string hex = "67";
    int decimal = 0, power = 0;

    for (int i = hex.length() - 1; i >= 0; i--) {
        int val = hexToDec(hex[i]);
        decimal += val * pow(16, power);
        power++;
    }

    cout << "Decimal equivalent: " << decimal << endl;

    return 0;
}
