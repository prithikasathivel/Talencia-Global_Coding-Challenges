#include <iostream>
#include <vector>
using namespace std;

int findFixedPoint(const vector<int>& arr) {
    int low = 0, high = arr.size() - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == mid) {
            return mid; // Fixed point found
        }
        else if (arr[mid] < mid) {
            low = mid + 1; // Search right side
        }
        else {
            high = mid - 1; // Search left side
        }
    }

    return -1; // No fixed point found
}

int main() {
    vector<int> arr1 = {-4, -2, 0, 1, 4, 6, 7};
    vector<int> arr2 = {-10, -5, 3, 4, 7, 9};

    cout << "Fixed point in arr1: " << findFixedPoint(arr1) << endl; // Output: 4
    cout << "Fixed point in arr2: " << findFixedPoint(arr2) << endl; // Output: -1

    return 0;
}
