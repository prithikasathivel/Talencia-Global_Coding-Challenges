#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    
    cout << "Enter number of rows: ";
    cin >> rows;
    
    cout << "Enter number of columns: ";
    cin >> cols;

    int arr[rows][cols];

    // Input elements
    cout << "Enter elements for 2D array:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> arr[i][j];

    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    // Search for element
    bool found = false;
    for (int i = 0; i < rows && !found; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == key) {
                cout << "Element found at position (row, col): (" << i << ", " << j << ")\n";
                found = true;
                break;
            }
        }
    }

    if (!found)
        cout << "Element not found in the 2D array.\n";

    return 0;
}
