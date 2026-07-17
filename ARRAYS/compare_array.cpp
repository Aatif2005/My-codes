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
bool compareArray(char a[], const char b[]) {
    int aIndex = 0;
    int bIndex = 0;
    const int aLength = getLength(a);
    while (aIndex <= aLength) {
        if (a[aIndex] != b[bIndex]) {
            return false;
        }
        else {
            aIndex++;
            bIndex++;
        }
    }
    return true;
}
int main() {
    //char actual[100] = "atif";
    //char copy[100];
    char arr[] = "love";
    char brr[] = "atif";
    cout << compareArray(arr,brr) <<endl;
    return 0;
}