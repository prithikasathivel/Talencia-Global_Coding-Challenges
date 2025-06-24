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

    char order;
    cout << "Enter sorting order (A for Ascending, D for Descending): ";
    cin >> order;

    if (order == 'A' || order == 'a') {
        sort(arr, arr + n);  // Ascending sort
    } else if (order == 'D' || order == 'd') {
        sort(arr, arr + n, greater<int>());  // Descending sort
    } else {
        cout << "Invalid input! Defaulting to ascending order.\n";
        sort(arr, arr + n);
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
