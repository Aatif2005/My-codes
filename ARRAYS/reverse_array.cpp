#include <iostream>
#include <algorithm>
using namespace std;
void printtArray(int arr[], int n) {
    for (int i = 0; i <= n-1; i++) {
        cout << arr[i] << " ";
    }
}
void reverse_array(int arr[],int n) {
    int left = 0;
    int right = n -1;
    while (left < right) {
       // int temp = arr[left];
       // arr[left] = arr[right];
       // arr[right] = temp;
       // left++;
       // right--;
        // using swap function
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}
int main() {
    int arr[4];
    int size = 4;

    cout << "Enter 4 elements: ";

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    reverse_array(arr, size);

    printtArray(arr, size);

    return 0;
}