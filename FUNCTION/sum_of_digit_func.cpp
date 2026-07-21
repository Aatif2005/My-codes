#include <iostream>
using namespace std;
int DigitSum(int num) {
    int sum = 0;
    while (num > 0) {
        int rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    return sum;
}
int main() {
    int n;
    cout << "Enter the numbers: " << endl;
    cin >> n;
    int ans = DigitSum(n);
    cout << "The sum of the num is: " << ans <<  endl;
    return 0;
}