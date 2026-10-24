#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int countTriplets(int sum, vector<int>& a) {
    int n = a.size();
    sort(a.begin(), a.end());
    int count = 0;
    for (int i = 0; i < n-2; i++) {
        if (n >0 && a[i] == a[i-1]) {
            continue;
        }
        int left = i+1;
        int right = n-1;
        while (left < right) {
            int s = a[i]+a[left]+a[right];
            if (s < sum) {
                count += right - left;
                left++;
            }
            else {
                right--;
            }
        }
    }
    return count;
}
int main() {
    vector<int> a = {5, 1, 3, 4, 7};

    int sum = 12;

    int result = countTriplets(sum, a);

    cout << result << endl;

    return 0;
}