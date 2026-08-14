/*Given an integer array nums, find a subarray that has the largest product, and return the product.
The test cases are generated so that the answer will fit in a 32-bit integer.
Note that the product of an array with a single element is the value of that element.
Example 1:
Input: nums = [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.
Example 2:
Input: nums = [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray.*/
#include <iostream>
#include <vector>
using namespace std;
int maxProduct(vector<int>& nums) {
    int n = nums.size();
    int maxEnding = nums[0];
    int minEnding = nums[0];
    int res = nums[0];
    for (int i = 1; i < n; i++) {
        int v1 = nums[i];
        int v2 = minEnding * nums[i];
        int v3 = maxEnding * nums[i];
        maxEnding = max(v1,max(v2,v3));
        minEnding = min(v1,min(v2,v3));
        res = max(res,max(maxEnding,minEnding));
    }
    return res;
}
int main() {
    vector<int> nums = {2,3,-2,4};
    cout << maxProduct(nums) << endl;
    return 0;
}