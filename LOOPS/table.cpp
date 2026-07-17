#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number for table: " << endl;
    cin >> n;
    int product = 1;
    for (int i = 1; i <= 10; i++) {
        product = n * i;
        cout << "The table of the number is " << product << endl;
    }
    return 0;
}
