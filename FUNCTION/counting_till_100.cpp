#include <iostream>
using namespace std;
/*void count_number(int num) {
    for (int i = 1; i <= num; i++) {
        cout<< i << endl;
    }
}
int main() {
    count_number(100);
    return 0;
}*/

int count_num(int num) {
    for (int i = 1; i <= num; i++) {
        cout << i << endl;
    }
}
int main() {
    int num;
   // int ans = count_num(100);
    cout << "Enter the range" << endl;
    cin >> num;
    int ans = count_num(100);

    return 0;
}