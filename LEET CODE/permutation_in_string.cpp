#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size();
        int n2 = s2.size();
        if (n1 > n2) {
            return false;
        }
        unordered_map<char, int> need;
        unordered_map<char, int> window;
        for (char c : s1) {
            need[c]++;
        }
        int low = 0;
        int high = 0;
        while (high < n1) {
            window[s2[high]]++;
            high++;
        }
        high--;
        if (window == need) {
            return true;
        }
        while (high + 1 < n2) {
            high++;
            window[s2[high]]++;
            window[s2[low]]--;
            if (window[s2[low]] == 0) {
                window.erase(s2[low]);
            }
            low++;
            if (window == need) {
                return true;
            }
        }
        return false;
    }
};
int main() {
    Solution solution;
    string s1, s2;
    cout << "Enter s1: ";
    cin >> s1;
    cout << "Enter s2: ";
    cin >> s2;
    if (solution.checkInclusion(s1, s2)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}