/*Given an array of positive integers nums and a positive integer target, return the minimal length of
a subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.
Example 1:
Input: target = 7, nums = [2,3,1,2,4,3]
Output: 2
Explanation: The subarray [4,3] has the minimal length under the problem constraint.
Example 2:
Input: target = 4, nums = [1,4,4]
Output: 1*/
// LEET CODE QUESTION NO - 209 SLIDING WINDOW PATTERNS
#include <iostream>
#include <vector>
using namespace std;
int minSubArraySum(int target, const vector<int>& arr) {
    int n = arr.size();
    int low = 0;
    int high = 0;
    int res = INT_MAX;
    int sum = 0;
    while (high < n) {
        sum = sum + arr[high];
        while (sum >= target) {
            int len = high - low + 1;
            res = min(res, len);
            sum = sum - arr[low];
            low++;
        }
        high++;
    }
    return(res == INT_MAX) ? 0 : res;
}
int main() {
    //const vector<int> arr = {2,3,1,2,4,3};
    const  vector <int> arr = {1,4,4};
    int target = 4;
    cout << minSubArraySum(target, arr);
    return 0;
}