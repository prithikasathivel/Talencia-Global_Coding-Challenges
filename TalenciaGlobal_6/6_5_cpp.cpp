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
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    // Display row-wise
    cout << "2D array displayed row-wise:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;  // Move to next row
    }

    return 0;
}
