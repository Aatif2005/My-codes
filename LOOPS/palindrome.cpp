#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;
    int original = num;
    int reverse = 0;
    while (num > 0) {
        int remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }
    if (reverse == original) {
        cout << "The number is palindrome" << endl;
    }
    else {
        cout << "The number is not palindrome" << endl;
    }
    return 0;
}