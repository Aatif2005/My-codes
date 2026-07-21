#include <iostream>
#include <algorithm>
using namespace std;
void reverse(int arr[], int size) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[4];
    int size = 4;
    cout << "Enter the element in array: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    reverse(arr,size);
    printArray(arr,size);
    return 0;
}