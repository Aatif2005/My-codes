#include <iostream>
using namespace std;
int square(int num) {
    return num * num;
}
int main() {
    int n;
    cout << "Enter the number for square: " << endl;
    cin >> n;
    const int ans = square(n);
    cout << "The square of number is : " << ans << endl;
    return 0;
}