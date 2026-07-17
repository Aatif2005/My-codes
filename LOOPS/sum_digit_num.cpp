#include <cmath>
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;
    int sum = 0;
    for (int i = num; i >0; i++) {
        int remainder = num % 10;
        sum = sum + remainder;
        num = num / 10;
    }
    cout << "The sum of the number" << sum << endl;
    return 0;
}