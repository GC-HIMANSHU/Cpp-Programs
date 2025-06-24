// C++ program to convert decimal to binary (manual method)
#include <iostream>
#include <string>
using namespace std;

string decimalToBinary(int num) {
    string binary = "";

    if (num == 0)
        return "0";

    while (num > 0) {
        binary = to_string(num % 2) + binary;
        num /= 2;
    }

    return binary;
}

int main() {
    int decimal = 7;

    string binary = decimalToBinary(decimal);

    cout << "Binary equivalent: " << binary << endl;

    return 0;
}
