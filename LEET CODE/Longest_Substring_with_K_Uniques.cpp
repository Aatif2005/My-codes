/*You are given a string s consisting only lowercase alphabets and an integer k. Your task is to find
the length of the longest substring that contains exactly k distinct characters.
Note : If no such substring exists, return -1.
Input: s = "aabaaab", k = 2
Output: 7
Explanation: The entire string "aabaaab" has exactly 2 unique characters 'a' and 'b', making it
the longest valid substring.*/
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int longestKSubstr(string &s, int k) {
    unordered_map<char, int> f;
    int n = s.length();
    int low = 0;
    int high = 0;
    int res = INT_MIN;
    for (high =0; high < n; high++) {
        f[s[high]]++;
        int siz =  f.size();
        while (f.size() > k) {
            f[s[low]]--;
            if (f[s[low - 1]] == 0) {
                f.erase(s[low - 1]);
            }
        }
        if (f.size() == k) {
            int len = high -low +1;
            res = max(res, len);
        }
    }
    if (res == INT_MIN) {
        return -1;
    }
    return res;
}
int main() {
    string str = "aabaaab";
    int k = 2;
    cout << longestKSubstr(str ,k);
    return 0;
}