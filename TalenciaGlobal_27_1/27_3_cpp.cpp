#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of terms (N): ";
    cin >> N;

    cout << "Series: ";
    for(int n = 1; n <= N; ++n) {
        int term = 3 * n * n + 2 * n - 3;
        cout << term << " ";
    }

    return 0;
}
