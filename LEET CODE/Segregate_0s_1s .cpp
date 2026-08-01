/*question - Given an array arr[] consisting of only 0's and 1's. Modify the array in-place to
segregate 0s onto the left side and 1s onto the right side of the array.
Examples :

Input: arr[] = [0, 1, 0, 1, 0, 0, 1, 1, 1, 0]
Output: [0, 0, 0, 0, 0, 1, 1, 1, 1, 1]
Explanation:  After segregation, all the 0's are on the left and 1's are on the right. Modified array will
be [0, 0, 0, 0, 0, 1, 1, 1, 1, 1].*/

#include <iostream>
using namespace std;

void segregate0and1(int arr[], int n) {
    int left = 0;
    int right = n - 1;

    while (left < right) {
        if (arr[left] == 0) {
            left++;
        }
        else if (arr[right] == 1) {
            right--;
        }
        else {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main() {
    int arr[] = {0, 1, 0, 1, 1, 0, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    segregate0and1(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}