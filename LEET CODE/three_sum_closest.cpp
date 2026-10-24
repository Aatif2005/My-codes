#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int threeSumClosest(vector<int>& nums, int target) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int minDiff = INT_MAX;
    int res_sum =0;
    for (int i = 0; i < n-2; i++) {
        if (i > 0 && nums[i] == nums[i-1]) {
            continue;
        }
        int left = i+1;
        int right = n-1;
        while (left < right) {
            int s = nums[i]+nums[left]+nums[right];
            int d = abs(target - s);
            if (d < minDiff) {
                minDiff = d;
                res_sum = s;
            }
            if (s == target) {
                left++;
                right--;
                return res_sum;
            }
            if (s < target) {
                left++;
            }
            else {
                right--;
            }
        }
    }
    return res_sum;
}
int main() {
    vector<int> nums = {0,0,0};
    int target = 1;
    int result = threeSumClosest(nums,target);
    cout << result << endl;
    return 0;
}