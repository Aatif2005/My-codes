#include <iostream>
using namespace std;
void printArray(int arr[],int n) {
    for (int i = 0; i <= n-1; i++) {
        cout << arr[i] << " ";
    }
}
void negative_array(int arr[], int n) {
    for (int i = 0; i <= n-1; i++) {
        arr[i] = -1;
    }
}
int main() {
    int arr[6];
    int size = 6;
    negative_array(arr,size);
    printArray(arr,size);
    return 0;
}