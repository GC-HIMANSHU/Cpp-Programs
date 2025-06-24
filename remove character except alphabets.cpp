#include <iostream>
#include <cctype>
using namespace std;

string keepOnlyAlphabets(const string& input) {
    string result = "";
    for (char c : input) {
        if (isalpha(c)) {
            result += c;
        }
    }
    return result;
}

int main() {
    string str = "Gee$ksfor$geeks";
    cout << "Alphabets only: " << keepOnlyAlphabets(str) << endl;
    return 0;
}
