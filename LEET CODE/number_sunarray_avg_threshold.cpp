#include <iostream>
#include <vector>
using namespace std;
int numOfSubarrays(vector<int>& arr, int k, int threshold) {
    int n = arr.size();
    int low = 0;
    int high = k-1;
    int sum = 0;
    int count = 0;
    for (int i = low; i <= high; i++) {
        sum = sum + arr[i];
    }
    if (sum/k >= threshold) {
        count++;
    }
    while (high < n) {
        low++;
        high++;
        if (high == n) {
            break;
        }
        sum = sum - arr[low-1];
        sum = sum + arr[high];
        if (sum/k >= threshold) {
            count++;
        }
    }
    return count;
}
int main() {
    //vector<int> arr = {2,2,2,2,5,5,5,8};
    vector<int> arr = {11,13,17,23,29,31,7,5,2,3};
    int k = 3;
    int threshold = 5;
    cout << numOfSubarrays(arr, k, threshold);
    return 0;
}