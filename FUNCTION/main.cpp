#include <iostream>
using namespace std;
int Sum(int a, int b) {
    int totalSum = a + b;
    return totalSum;
}
int main() {
    int ans = Sum(5,50);
    cout << ans << endl;
    return 0;
}