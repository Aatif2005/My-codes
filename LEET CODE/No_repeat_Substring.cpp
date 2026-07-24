/*Given a string s, find the length of the longest substring without duplicate characters.
Example 1:
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.
Example 2:
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.*/
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int norepeat_substring(string s) {
    unordered_map<char , int> f;
    int n = s.size();
    int low = 0;
    int high = 0;
    int res = INT_MIN;
    for (high = 0; high < n; high++) {
        f[s[high]]++;
        int k = high - low + 1;
        while (f.size() < k) {
            f[s[low]]--;
            if (f[s[low]] == 0) {
                f.erase(s[low]);
            }
            low++;
            k = high - low + 1;
        }
        int len = high - low + 1;
        res = max(res , len);
    }
    if (res == INT_MIN) {
        return 0;
    }
    return res;
}
int main() {
    //string str = "abcabcbb";
    string str = " "; // interesting case I got this wrong handled 1 time on leet code
    cout << norepeat_substring(str);
    return 0;
}