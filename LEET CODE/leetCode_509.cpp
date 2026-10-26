#include <iostream>
using namespace std;
int fib(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    int ans1 = fib(n-1);
    int ans2 = fib(n-2);
    return ans1+ans2;
}
int main() {
    int n = 5;
    int result = fib(n);
    cout << result << endl;
    return 0;
}