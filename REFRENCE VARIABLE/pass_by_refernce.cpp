#include <iostream>
using namespace std;
void solve(string &a) {
    cout << "Inside func: " << a << endl;
   a[0] = 'b';
    cout << "Inside func: " << a << endl;
}
int main() {
    //int a = 50;
    // now for char
    //char a = 'c';
    // now for string
    string str = "love";
    cout << "Inside main func: " << str << endl;
    solve(str);
    cout << "Inside main func: " << str << endl;
    return 0;
}