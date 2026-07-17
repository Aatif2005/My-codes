#include <iostream>
using namespace std;
int main() {
  //  char arr[10] = "Atif";
  //  cout << arr << endl;
    // but this will not work in the case of integer array
    //int arr[4] = {1,2,3,4};
    //cout << arr << endl;   // integer ke  case me base address print hota hai
    char arr[5] = "love";
    cout << arr << endl;
    for (int i = 0;i< 5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}