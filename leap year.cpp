// C++ program to check if a given year is a leap year
#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    if (year % 400 == 0)
        return true;
    if (year % 100 == 0)
        return false;
    if (year % 4 == 0)
        return true;
    return false;
}

int main() {
    int year = 2000;
    if (isLeapYear(year))
        cout << year << " is a Leap Year";
    else
        cout << year << " is Not a Leap Year";
    return 0;
}
