#include <iostream>
using namespace std;
void even_odd(const int num) {
    if (num % 2 == 0) {
        cout << "The number is even "  << endl;
    }
    else {
        cout << "The number is odd: " << endl;
    }
}
int main() {
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    even_odd(n);
    return 0;
}