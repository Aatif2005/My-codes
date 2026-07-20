#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout << "Enter two number: " << endl;
    cin >> a >> b;
    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    cout << "GCD of the number is: " << a << endl;
    return 0;
}