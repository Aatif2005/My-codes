#include <iostream>
#include <vector>
using namespace std;
double findMaxAverage(vector<int>& nums, int k) {
    int n = nums.size();
    int low = 0;
    int high = k - 1;
    double sum = 0;
    for (int i = low; i <= high; i++) {
        sum += nums[i];
    }
    double maxSum = sum;
    while (high < n - 1) {
        low++;
        high++;
        sum -= nums[low - 1];
        sum += nums[high];
        maxSum = max(maxSum, sum);
    }
    return maxSum / k;
}
int main() {
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;
    cout << findMaxAverage(nums, k);
    return 0;
}