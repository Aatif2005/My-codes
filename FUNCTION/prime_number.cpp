#include <iostream>
using namespace std;

int isPrime(int num) {
    if (num <= 1)
        return 0;

    for (int i = 2; i < num; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    for (int i = 1; i <= 100; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    return 0;
}