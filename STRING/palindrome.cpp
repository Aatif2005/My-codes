#include <iostream>
#include <algorithm>
using namespace std;
void palindrome(string str) {
    const string original = str;
    reverse(str.begin(), str.end());
    if (str == original) {
        cout << "The string is palindrome";
    }
    else {
        cout << "The string is not palindrome";
    }
}
int main() {
    string str;
    cout << "Enter you string" << endl;
    cin >> str;
    palindrome(str);
    return 0;
}