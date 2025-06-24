#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 3, 8, 2, 7, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxVal = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    cout << "Maximum value: " << maxVal << endl;
    return 0;
}
