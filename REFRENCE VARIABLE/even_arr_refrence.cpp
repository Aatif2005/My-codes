#include <iostream>
using namespace std;
int countEvenNum(int arr[], const int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0)
            count++;
    }
    return count;
}
int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;
    int arr[100];
    cout << "Enter the elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    const int ans = countEvenNum(arr, size);
    cout << "Number of even elements = " << ans << endl;
    return 0;
}
// we cant apply pass by reference for unknown size array in c++.