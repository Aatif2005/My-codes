#include <iostream>
using namespace std;
void solve(string a) {
    cout << "Inside function: " << a << endl;
    a[0] = 'b';
    cout << "Inside function: " << a << endl;
}
int main() {
    //int a = 5;
    // now for char
   // char a = 'y';
    // now for string
    string str = "love";
    cout << "Inside the main function: " << str << endl;
    solve(str);
    cout << "Inside the main function: " << str << endl;
    return 0;
}