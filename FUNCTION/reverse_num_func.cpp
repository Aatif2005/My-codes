#include <iostream>
using namespace std;
int reverse(int num) {
    int reverse = 0;
    for (int i = 0; i <= num; i++) {
        const int remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }
    return reverse;
}
int main() {
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    const int ans = reverse(n);
    cout << "The reverse of the number is: " << ans << endl;
    return 0;
}