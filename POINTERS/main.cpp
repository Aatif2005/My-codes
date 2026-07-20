#include <iostream>
using namespace std;
int main() {
    int num = 50;
    cout << "Printing the address of the number" << &num << endl;
    int *ptr = &num;
    cout << num << endl;
    cout << &num << endl;
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << *ptr << endl;
    (*ptr)++;
    cout << num << endl;
    return 0;
}