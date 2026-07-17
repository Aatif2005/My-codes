#include <iostream>
using namespace std;
int main() {
    int arr[3][4] = {
        {1,2,3,4},
       {5,6,7,8},
        {9,10,11}
    };
    int row = 3;
    int col = 4;
    for (int row_index = 0; row_index < row; row_index++) {
        for (int col_index = 0; col_index < col; col_index++) {
            cout << arr[row_index][col_index] << " ";
        }
        cout << endl;
    }
   // cout << arr[0][3] << endl;
    return 0;
}