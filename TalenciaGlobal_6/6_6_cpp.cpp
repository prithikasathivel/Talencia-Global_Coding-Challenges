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

    // Compute sum
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }

    cout << "Sum of all elements in the 2D array: " << sum << endl;

    return 0;
}
