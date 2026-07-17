#include <iostream>
using namespace std;
void printArray(int arr[], int n) {
    for (int i =0; i <= n-1; i++) {
        cout << arr[i] << " ";
    }
}
void flip_num(int arr[],int n) {
    for (int i =0; i <= n-1; i++) {
        if (arr[i] == 1) {
            arr[i] = 0;
        }
        else {
            arr[i] = 1;
        }
    }
}
int main() {
    int arr[] = {0,0,1,1,0,1};
    int size = 6;
    flip_num(arr,size);
    printArray(arr, size);
    return 0;
}