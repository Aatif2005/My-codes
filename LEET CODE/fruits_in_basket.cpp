/*You are visiting a farm that has a single row of fruit trees arranged from left to right. The trees
are represented by an integer array fruits where fruits[i] is the type of fruit the ith tree produces.
Input: fruits = [1,2,1]
Output: 3
Explanation: We can pick from all 3 trees.
Example 2:

Input: fruits = [0,1,2,2]
Output: 3
Explanation: We can pick from trees [1,2,2].
If we had started at the first tree, we would only pick from trees [0,1].*/
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int totalFruit(const vector<int>& fruits) {
    int low = 0;
    int res = 0;
    unordered_map<int, int> f;
    for (int high = 0; high < fruits.size(); high++) {
        f[fruits[high]]++;
        while (f.size() > 2) {
            f[fruits[low]]--;
            if (f[fruits[low]] == 0)
                f.erase(fruits[low]);
            low++;
        }
        res = max(res, high - low + 1);
    }
    return res;
}
int main() {
    vector<int> fruits = {1,2,3,2,2};
    cout << totalFruit(fruits);
    return 0;
}