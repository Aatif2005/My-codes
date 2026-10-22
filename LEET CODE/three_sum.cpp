#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n - 2; i++) {
        // Skip duplicate nums[i]
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        int left = i + 1;
        int right = n - 1;
        int sum = -nums[i];
        while (left < right) {
            int s = nums[left] + nums[right];
            if (s == sum) {
                ans.push_back({nums[i], nums[left], nums[right]});
                left++;
                right--;
                // Skip duplicates from left
                while (left < right &&
                       nums[left] == nums[left - 1]) {
                    left++;
                       }
                // Skip duplicates from right
                while (left < right &&
                       nums[right] == nums[right + 1]) {
                    right--;
                       }
            }
            else if (s < sum) {
                left++;
            }
            else {
                right--;
            }
        }
    }
    return ans;
}

int main() {

    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> ans = threeSum(nums);

    cout << "Triplets:\n";

    for (const auto& triplet : ans) {
        cout << "[ ";

        for (int x : triplet) {
            cout << x << " ";
        }

        cout << "]\n";
    }

    return 0;
}