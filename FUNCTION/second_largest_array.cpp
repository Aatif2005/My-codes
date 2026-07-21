#include <algorithm>
#include <iostream>
using namespace std;
int secondLargest(int arr[], int size) {
    sort(arr, arr+size);
    // if the input is with not any duplicate we can with just
    // return arr[size-2];
    // but this is good way
    for (int i = size - 2; i >= 0; i--) {
        if (arr[i] != arr[size - 1]) {
            return arr[i];
        }
    }
    return -1;
}

int main() {
    int arr[4];
    int size = 4;
    cout << "Enter the element: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int ans = secondLargest(arr, size);
    cout << "Second largest lement is: " << ans << endl;
    return 0;
}