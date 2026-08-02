/*question - Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order,
 *find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and
 *numbers[index2] where 1 <= index1 < index2 <= numbers.length.
Return the indices of the two numbers index1 and index2, each incremented by one, as an integer array [index1,
index2] of length 2.
The tests are generated such that there is exactly one solution. You may not use the same element twice.
Your solution must use only constant extra space.*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int n = numbers.size();

    int left = 0;
    int right = n - 1;

    while (left < right) {
        int sum = numbers[left] + numbers[right];

        if (sum == target) {
            return {left + 1, right + 1};   // 1-based indexing
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    return {};
}

int main() {
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(numbers, target);

    if (!result.empty()) {
        cout << "Indices are: " << result[0] << " " << result[1] << endl;
    } else {
        cout << "No pair found." << endl;
    }

    return 0;
}