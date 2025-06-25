#include <iostream>
#include <vector>
using namespace std;

// Function to find the first occurrence of x
int findFirst(const vector<int>& arr, int x) {
    int low = 0, high = arr.size() - 1, result = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            result = mid;
            high = mid - 1; // Keep searching left
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

// Function to find the last occurrence of x
int findLast(const vector<int>& arr, int x) {
    int low = 0, high = arr.size() - 1, result = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            result = mid;
            low = mid + 1; // Keep searching right
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    vector<int> arr = {1, 3, 5, 5, 5, 5, 67, 123, 125};
    int x = 5;

    int first = findFirst(arr, x);
    int last = findLast(arr, x);

    cout << first << " " << last << endl;

    return 0;
}
