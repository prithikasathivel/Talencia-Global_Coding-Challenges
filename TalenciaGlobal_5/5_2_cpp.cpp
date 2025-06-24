#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements
    int sum = 0;

    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    std::cout << "Sum of array elements: " << sum << std::endl;
    return 0;
}