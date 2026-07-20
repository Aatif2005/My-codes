#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;
    int temp = num;
    int digits = 0;
    while (temp > 0) {
        digits++;
        temp = temp / 10;
    }
    temp = num;
    int sum = 0;
    while (temp > 0) {
        int digit = temp % 10;
        sum = sum + pow(digit, digits);
       // sum += pow(digit, digits);
        temp = temp /10;
    }
    if (sum == num)
        cout << num << " is an Armstrong number" << endl;
    else
        cout << num << " is NOT an Armstrong number" << endl;

    return 0;

}