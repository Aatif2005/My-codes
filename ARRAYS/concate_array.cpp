#include <iostream>
using namespace std;

int getLength(const char arr[]) {
    int index = 0;
    int count = 0;

    while (arr[index] != '\0') {
        count++;
        index++;
    }

    return count;
}

void concatArray(char a[], const char b[]) {
    int aIndex = getLength(a);
    int bIndex = 0;

    while (b[bIndex] != '\0') {
        a[aIndex] = b[bIndex];
        aIndex++;
        bIndex++;
    }

    a[aIndex] = '\0';
}

void copyArray(const char actualArr[], char copyArr[]) {
    int aIndex = 0;
    int bIndex = 0;
    while (actualArr[aIndex] != '\0') {
        copyArr[bIndex] = actualArr[aIndex];
        aIndex++;
        bIndex++;
    }
    copyArr[bIndex] = '\0';
}
int main() {
    char actual[100] = "love babbar";
    char ans[100];
    copyArray(actual, ans);
    cout << "Printing array: " << ans << endl;
   // char a[50] = "love";
   // char b[50] = "pneumonoultramicroscopicsilicovolcanoconiosis";
   // concatArray(a, b);
   // cout << "printing a: " << a << endl;
    return 0;
}