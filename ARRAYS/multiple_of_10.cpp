#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void multiple_of_10(int arr[], int size) {
    int count = 1;

    for (int i = 0; i < size; i++) {
        arr[i] = 10 * count;
        count++;
    }
}

int main() {
    int arr[10];
    int size = 10;

    multiple_of_10(arr, size);
    printArray(arr, size);

    return 0;
}