#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = 0;
        int fast = 0;

        // Phase 1: Find the meeting point
        while (true) {
            slow = nums[slow];
            fast = nums[nums[fast]];

            if (slow == fast) {
                break;
            }
        }

        // Phase 2: Find the duplicate number
        slow = 0;

        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};

int main() {
    vector<int> nums = {1, 3, 4, 2, 2};

    Solution obj;

    cout << "Duplicate number: " << obj.findDuplicate(nums) << endl;

    return 0;
}