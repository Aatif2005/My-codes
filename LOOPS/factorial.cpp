#include <iostream>
using namespace std;
int main() {
    int n;
    int fact = 1;
    cout << "Enter the number for factorial" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        fact = fact *i;
        cout << "The factorial of the number is: " << fact << endl;
    }
    return 0;
}