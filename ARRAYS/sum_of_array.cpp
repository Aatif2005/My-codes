#include <iostream>
using namespace std;
int main() {
    int arr[] = {10,20,30,40,50,60};
    int sum = 0;
    for (int i = 0; i<= 5; i++) {
        sum = sum + arr[i];
    }
    cout << "The sum of arr is: " << sum << endl;
    return 0;
}