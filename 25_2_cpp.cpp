#include <iostream>
#include <vector>
using namespace std;

// Function to find maximum in a bitonic array
int findMaximum(const vector<int>& arr) {
    int low = 0, high = arr.size() - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if ((mid == 0 || arr[mid] > arr[mid - 1]) &&
            (mid == arr.size() - 1 || arr[mid] > arr[mid + 1])) {
            return arr[mid];  // Peak element
        }
        else if (mid < arr.size() - 1 && arr[mid] < arr[mid + 1]) {
            low = mid + 1;  // Move to right
        }
        else {
            high = mid - 1; // Move to left
        }
    }

    return -1;
}

int main() {
    vector<int> arr = {18, 110, 210, 452, 810, 500, 101, 13};
    int maxVal = findMaximum(arr);
    cout << "Maximum value: " << maxVal << endl;
    return 0;
}
