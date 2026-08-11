#include <iostream>
using namespace std;
int nextNum(int n) {
    int sum = 0;
    while (n>0) {
        int digit = n %10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}
bool isHappy(int n) {
    int slow = nextNum(n);
    int fast = nextNum(nextNum(n));
    while (slow != fast) {
        slow = nextNum(slow);
        fast = nextNum(nextNum(fast));
    }
    return slow == 1;
}
int main() {
    int n;
    cout << "Enter number to check happy" << endl;
    cin >> n;
    cout << boolalpha << isHappy(n) << endl;
    return 0;
}