#include <iostream>
using namespace std;

int main() {
    string vowel = "AEIOUaeiou";
    string str;
    cout << "Enter the string" << endl;
    cin >> str;
    const int len = str.length();
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (vowel.find(str[i]) != string::npos) {
            count++;
        }
    }
   // for (int i = 0; i <= len-1; i++) {
   //     for (int j = 0; j <10; j++) {
   //         if (str[i] == vowel[j]) {
   //             count++;
   //         }
   //     }
   // }
    cout << "Vowel count is: " << count << endl;
    return 0;
}