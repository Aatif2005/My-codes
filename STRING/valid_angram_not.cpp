#include <iostream>
#include <algorithm>
using namespace std;

bool isAngram(string str1, string str2) {
    if (str1.length() != str2.length()) {
        return false;
    }
    else {
        sort(str1.begin(),str1.end());
        sort(str2.begin(), str2.end());
        return str1 == str2;
    }
}
int main() {
    string str1,str2;
    cout << "Enter the string 1" << endl;
    cin >> str1;
    cout << "Enter the string 2" << endl;
    cin >> str2;
    if (isAnagram(str1, str2)) {
        cout << "Valid anagram!" << endl;
    } else {
        cout << "Not an anagram!" << endl;
    }
    return 0;
}
