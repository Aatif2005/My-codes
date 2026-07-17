#include <iostream>
using namespace std;
int main() {
    int budget;
    cout << "Enter your budget: " << endl;
    cin >> budget;
    if (budget > 200000) {
        cout << "You can buy bmw";
    }
    return 0;
}