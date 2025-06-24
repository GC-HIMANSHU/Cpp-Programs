// C++ program to find sum of first n natural numbers
#include <iostream>
using namespace std;

int findSum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}

int main() {
    int n = 7;
    cout << "Sum of first " << n << " natural numbers is: " << findSum(n);
    return 0;
}
