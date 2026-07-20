#include <iostream>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        const int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}
int main() {
    int a;
    int b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    const int lcm = (a * b)  / gcd(a,b);
    cout << "LCM of the number is: " << lcm << endl;
    return 0;
}