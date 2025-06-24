#include <iostream>
using namespace std;

int findElement(int arr[], int n, int key) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key) return i;
    }
    return -1; // not found
}

int main() {
    int arr[] = {12, 34, 10, 6, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 40;

    int pos = findElement(arr, n, key);
    if (pos == -1)
        cout << "Element not found\n";
    else
        cout << "Element found at index: " << pos << endl;

    return 0;
}
