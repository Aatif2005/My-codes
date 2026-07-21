#include <iostream>
using namespace std;
int average(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    return (int)sum / size;
}
int main() {
    int arr[4];
    int size = 4;
    cout << "Enter the element in the array: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int ans = average(arr, size);
    cout << "The averag of the array is: " << ans << endl;
    return 0;
}