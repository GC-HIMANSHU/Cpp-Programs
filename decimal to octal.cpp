#include <iostream>
using namespace std;

int main() {
    int decimal = 55;
    int octal = 0;
    int place = 1;

    int temp = decimal;
    while (temp > 0) {
        int remainder = temp % 8;
        octal += remainder * place;
        temp /= 8;
        place *= 10;
    }

    cout << "Octal equivalent: " << octal << endl;

    return 0;
}









