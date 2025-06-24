#include <iostream>
using namespace std;

bool checkPalindrome(int n) {
    int reversed = 0, original = n;
    while (n != 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    return reversed == original;
}

int main() {
    int n = 12321;
    cout << (checkPalindrome(n) ? "Yes\n" : "No\n");
    return 0;
}
