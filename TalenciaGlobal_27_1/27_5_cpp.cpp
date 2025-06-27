#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of terms (N): ";
    cin >> N;

    int oddTerm = 10;  // starting from 1st term
    int evenTerm = 5;  // starting from 2nd term

    cout << "Series: ";
    for (int i = 1; i <= N; i++) {
        if (i % 2 != 0) {
            cout << oddTerm << " ";
            oddTerm += 50;
        } else {
            cout << evenTerm << " ";
            evenTerm += 10;
        }
    }

    return 0;
}
