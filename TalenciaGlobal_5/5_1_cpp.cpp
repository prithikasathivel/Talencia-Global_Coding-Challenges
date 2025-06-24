#include <iostream>
using namespace std;

int main() {
    int n;

    // Accept size of array
    cout << "Enter the size of the array (n): ";
    cin >> n;

    // Declare array of size n
    int arr[n];

    // Accept elements into array
    cout << "Enter " << n << " elements:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Display the array elements
    cout << "The array elements are: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
