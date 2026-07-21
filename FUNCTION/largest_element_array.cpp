/*#include <iostream>
using namespace std;
void printtArray(int arr[], int n) {
    for (int i = 0; i <= n-1; i++) {
        cout << arr[i] << " ";
    }
}
int largestNum(const int arr[], const int size) {
    int largest = arr[0];
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        if (arr[left] > largest) {
            largest = arr[left];
        }
        if (arr[right] > largest) {
            largest = arr[right];
        }
        left++;
        right--;
    }
    return largest;
}
int main() {
    int arr[4];
    int size = 4;
    cout << "Enter 4 elements: ";

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
   int asn =  largestNum(arr,size);
    printtArray(arr,size);
    cout << "Largest element in the array is: " << asn << endl;
    return 0;
}*/
// without using two pointers
#include <iostream>
using namespace std;
void printArray(int arr[], const int n) {
    for (int i = 0; i <= n-1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int largestElement(const int arr[], const int size) {
    int largest = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}
int main() {
    int arr[4] = {10,20,30,40};
    int size = 4;
    int ans = largestElement(arr,size);
    cout << "The largest element in the array is: " << ans << endl;
    //printArray(arr, size);
    return 0;
}