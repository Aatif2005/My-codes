/*Given an integer array nums, find the subarray with the largest sum, and return its sum.
Example 1:
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
Example 2:
Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.
Example 3:
Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.*/
#include <iostream>
#include <vector>
using namespace std;
int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    int bestEnding = nums[0];
    int ans = nums[0];
    for (int i = 1; i < n; i++) {
        int v1 = bestEnding + nums[i];
        int v2 = nums[i];
        bestEnding = max(v1 , v2);
        ans = max(ans , bestEnding);
    }
    return ans;
}
int main() {
    vector <int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubArray(nums) << endl;
    return 0;
}