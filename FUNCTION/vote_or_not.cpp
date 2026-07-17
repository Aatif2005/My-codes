#include <iostream>
using namespace std;
void vote(int age) {
    if (age > 18) {
        cout << "You can vote" << endl;
    }
    else {
        cout << "You cannot vote" << endl;
    }
}
int main() {
    vote(19);
    return 0;
}