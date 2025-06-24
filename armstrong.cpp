#include <iostream>
using namespace std;

int main() {
    int n = 153, temp = n, ans = 0;

    while (n > 0) {
        int rem = n % 10;
        ans += rem * rem * rem;
        n /= 10;
    }

    if (temp == ans)
        cout << "Yes, it is Armstrong Number";
    else
        cout << "No, it is not an Armstrong Number";

    return 0;
}
