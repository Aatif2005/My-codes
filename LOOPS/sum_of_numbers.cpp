#include <iostream>
using namespace std;
int main() {
    cout << "Enter the number to be sum up: " << endl;
    int num;
    int sum = 0;
    cin >> num;
    int i = 1;
    while (i <= num) {
        sum = sum + i;
        cout << "The sum is " << sum << endl;
        i++;
    }

    //for (int i = 1; i <= num; i++) {
    //    sum = sum + i;
    //    cout << "The sum is " << sum << endl;
    //}
    return 0;
}