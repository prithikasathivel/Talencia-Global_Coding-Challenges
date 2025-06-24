#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 3, 8, 2, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int mini = arr[0]; // Declare and initialize 'mini'

    for (int i = 1; i < n; ++i) {
        if (arr[i] < mini) {
            mini = arr[i];
        }
    }

    cout << "Minimum value: " << mini << endl;
    return 0;
}
