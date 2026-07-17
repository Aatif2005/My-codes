#include <iostream>
using namespace std;
int simple_intrest(int p,int r,int t) {
    int calculation =( p*r*t) / 100;
    return calculation;
}
int main() {
   // int ans = simple_intrest(1000,5,2);
   // cout << ans << endl;
    int p , r , t;
    cout << "Enter p,r,t for SI: " << endl;
    cin >> p >> r >> t;
   int ans = simple_intrest(1000,5,2);
    cout << ans << endl;
    return 0;
}