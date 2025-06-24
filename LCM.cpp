#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int a = 24, b = 13;
    cout << "LCM : " << lcm(a, b);
    return 0;
}









