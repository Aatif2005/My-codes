#include <iostream>
using namespace std;
int main() {
    //int arr[] = {20,30,40,50,60,70,80,90};
    //cout << arr[4] << endl;
    //for (int i = 0; i<= 7; i++) {
    //    cout << arr[i]<< " ";
    //}
    int arr[5];
    for (int index= 0; index <= 5; index++) {
        cout << "Enter the value for arr["<< index <<"]:";
        cin >> arr[index];
        cout << endl;
    }
    for (int index = 0; index <= 5; index++) {
        cout << arr[index] << " ";
    }
    return 0;
}