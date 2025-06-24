#include <iostream>
using namespace std;

int main() {
    string str = "GeeksforGeeks";
    int j = 0;

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
            str[j++] = ch;
        }
    }

    str.resize(j); 
    cout << "String without vowels: " << str << endl;
    return 0;
}
