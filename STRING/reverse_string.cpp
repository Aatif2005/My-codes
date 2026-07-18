#include <iostream>
#include <algorithm>
using namespace std;
string reverseString(string str)  {
    // now using loops
    int len = str.length();
    string reversed = "";
    for (int i = len-1; i >= 0; i--) {
        reversed = reversed + str[i];
    }
    //reverse(str.begin(), str.end());
    //return str;
    return reversed;
}
int main() {
    //string str = "Atif";
    //cout << reverseString(str) << endl;
    string str;
    cout << "Enter the string to be reversed: " << endl;
    cin >> str;
    cout << reverseString(str) << endl;
    return 0;
}