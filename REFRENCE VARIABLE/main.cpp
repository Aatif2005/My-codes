#include <iostream>
using namespace std;
int main() {
    int a = 5;
    int &temp = a;
    cout << temp << endl;
    temp--;
    cout << temp << endl;
    temp = temp * 10;
    cout << temp << endl;
    a++;
    cout << a << endl;
    return 0;
}