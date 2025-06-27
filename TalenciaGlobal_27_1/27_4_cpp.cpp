#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of terms (N): ";
    cin >> N;

    int term = 0;
    cout << "Series: ";

    for (int i = 1; i <= N; i++) {
        cout << term << " ";

        // Update term based on alternating pattern
        if (i % 3 == 1)
            term += 6;
        else if (i % 3 == 2)
            term += 4;
        else
            term += 7;
    }

    return 0;
}
