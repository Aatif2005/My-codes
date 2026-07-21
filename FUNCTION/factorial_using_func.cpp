#include <iostream>
using namespace std;
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact = fact * i;
    }
    return fact;
}
int main() {
    int n;
    cout << "Enter number for factorial: " << endl;
    cin >> n;
    int ans = factorial(n);
    cout << "Factorial of number is: " << ans << endl;
    return 0;
}