/*Given an array arr[], find the sub-array containing at least one number which has the minimum sum and return its sum.
Examples :
Input: arr[] = {3,-4, 2,-3,-1, 7,-5}
Output: -6
Explanation: The subarray is {-4,2,-3,-1} = -6
Input: arr[] = {2, 6, 8, 1, 4}
Output: 1
Explanation: The sub-array is {1} = 1*/
#include <iostream>
#include <vector>
using namespace std;
int minSubArray(vector<int>& arr) {
    int n = arr.size();
    int bestEnding = arr[0];
    int ans = arr[0];
    for (int i = 1; i < n; i++) {
        int v1 = bestEnding + arr[i];
        int v2 = arr[i];
        bestEnding = min(v1 , v2);
        ans = min(ans , bestEnding);
    }
    return ans;
}
int main() {
    vector <int> arr = {3,-4, 2,-3,-1, 7,-5};
    cout << minSubArray(arr) << endl;
    return 0;
}