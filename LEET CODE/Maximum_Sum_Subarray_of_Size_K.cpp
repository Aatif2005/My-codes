/*Given an array of integers arr[]  and a number k. Return the maximum sum of a subarray of size k.
Note: A subarray is a contiguous part of any given array.
Examples:
Input: arr[] = [100, 200, 300, 400], k = 2
Output: 700
Explanation: arr2 + arr3 = 700, which is maximum.*/
// geeks for geeks question "SLIDING WINDOW PATTERN"
#include <iostream>
#include <vector>
using namespace std;
int maxSubarraySum(const vector<int>& arr, int k) {
    const int n = arr.size();
    int low = 0;
    int high = k - 1;
    int sum =0;
    int res = INT_MIN;
    for (int i = low; i <= high; i++) {
        sum = sum + arr[i];
    }
    while (high < n) {
        res = max(res, sum);
        low++;
        high++;
        if (high == n) {
            break;
        }
        sum = sum - arr[low -1];
        sum = sum + arr[high];
    }
    return res;
}
int main() {
    vector <int> arr = {100, 200, 300, 400};
    int k = 2;
    cout << maxSubarraySum(arr, k);
    return 0;
}