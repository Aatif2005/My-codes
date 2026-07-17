#include <iostream>
using namespace std;
int  getLength(char arr[]) {
    int count = 0;
    int index = 0;
    while (arr[index] != NULL) {
        count++;
        index++;
    }
    return count;

}
int main() {
    char arr[] = "pneumonoultramicroscopicsilicovolcanoconiosis";
    cout << getLength(arr) << endl;
    return 0;
}