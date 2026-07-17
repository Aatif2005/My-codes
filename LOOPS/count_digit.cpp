#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;
    int count = 0;
    while (num > 0) {
        num = num / 10;
        count++;
    }
    cout << "The digit in the number is: " << count << endl;
    return 0;
}