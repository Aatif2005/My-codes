/*You are given a string s and an integer k. You can choose any character of the string and
change it to any other uppercase English character. You can perform this operation at most k times.
Return the length of the longest substring containing the same letter you can get after performing the above
operations.
Example 1:
Input: s = "ABAB", k = 2
Output: 4
Explanation: Replace the two 'A's with two 'B's or vice versa.
Example 2:
Input: s = "AABABBA", k = 1
Output: 4
Explanation: Replace the one 'A' in the middle with 'B' and form "AABBBBA".
The substring "BBBB" has the longest repeating letters, which is 4.
There may exists other ways to achieve this answer too.
Leet code question - 424 sliding window*/
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int characterReplacement(string s, int k) {
    int n = s.size();
    int low = 0;
    int maxFreq = 0;
    int res =0;
    unordered_map<char,int> f;
    for (int high =0; high < n; high++) {
        f[s[high]]++;
        int window_size = high - low + 1;
        maxFreq = max(maxFreq , f[s[high]]);
        while ((high - low + 1) - maxFreq > k) {
            f[s[low]]--;
            low++;
        }
        int len = high - low + 1;
        res = max(res , len);
    }
    return res;
}
int main() {
    string str = "AABABBA";
    int k = 2;
    cout << characterReplacement(str , k);
    return 0;
}