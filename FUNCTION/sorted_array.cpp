#include <iostream>
#include <algorithm>
using namespace std;
void sortedArray(int arr[], int size) {
    sort(arr, arr + size);
}
void printArray(int arr[], int size) {
    for (int i =0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[4];
    int size = 4;
    cout << "Enter the element in the array: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    sortedArray(arr, size);
    printArray(arr,size);
    return 0;
}