#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    int maxDigit = 0;
    while (n > 0) {
        const int digit = n % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        n = n/ 10;
    }
    cout << "The max digit is: " << maxDigit;
    return 0;
}