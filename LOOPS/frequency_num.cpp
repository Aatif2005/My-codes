#include <iostream>
using namespace std;

int main() {
    int num, target;
    cout << "Enter the number: " << endl;
    cin >> num;
    cout << "Enter digit to find frequency: " << endl;
    cin >> target;
    int freq = 0;
    while (num > 0) {
        int digit = num % 10;
        if (digit == target)
            freq++;
        num = num / 10;
    }
    cout << "The frequency of " << target << " is: " << freq << endl;
    return 0;
}