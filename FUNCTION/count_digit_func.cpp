#include <iostream>
using namespace std;
int countDigit(int num) {
    int count = 0;
    while (num > 0) {
        count ++;
        num = num / 10;
    }
    return count;
}
int main() {
    int n;
    cout << "Enter the digit: " << endl;
    cin >> n;
   const int ans = countDigit(n);
    cout << "The number of digit is: " << ans << endl;
    return 0;
}
