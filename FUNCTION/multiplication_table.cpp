#include <iostream>
using namespace std;
/*void printmultiplies(int num) {
    for (int i = 1; i <= 10; i++) {
        cout << num * i << endl;
    }
}
int main() {
    printmultiplies(8);
    return 0;
}*/
/*int multiplication_table(int num) {
    for (int i = 1; i <= 10; i++) {
        cout << num << "X" << i<< "=" << num * i << endl;
    }
    return 0;
}
int main() {
    multiplication_table(5);
    return 0;
}*/

int multiplication_table(int num, int i) {
    int result = num * i;
    return result;
}
int main() {
    for (int i = 1; i <= 10; i++) {
        int ans = multiplication_table(10000,i);
        cout << 10000 << "X" << i << "=" << ans << endl;
    }
    return 0;
}