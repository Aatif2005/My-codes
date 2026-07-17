#include <iostream>
using namespace std;
void print_2D_array(int arr[][4], int rowSize, int colSize) {
    cout << "Printing 2D array" << endl;;
    for (int row_index = 0; row_index < rowSize; row_index++) {
        for (int col_index = 0; col_index < colSize; col_index++) {
            cout << arr[row_index][col_index] << " ";
        }
        cout << endl;
    }
}
int main() {
    int arr[3][4];
    int row = 3;
    int col = 4;
    for (int row_index = 0; row_index < row; row_index++) {
        for (int col_index = 0; col_index < col; col_index++) {
            cout << "Enter the intput for aar["<<row_index<<"]["<<col_index<<"]:";
            cin >> arr[row_index][col_index];
        }
        cout << endl;
    }
    print_2D_array(arr,row,col);
    return 0;
}