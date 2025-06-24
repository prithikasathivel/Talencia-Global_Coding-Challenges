#include <iostream>
#include <algorithm>  // for sort()
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Binary search requires sorted array
    sort(arr, arr + n);

    cout << "Sorted array for binary search: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    // Binary Search
    int low = 0, high = n - 1;
    bool found = false;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            cout << "Element found at index (0-based): " << mid << endl;
            found = true;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found)
        cout << "Element not found in the array." << endl;

    return 0;
}
