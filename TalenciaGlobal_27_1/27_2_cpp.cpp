#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of terms (N): ";
    cin >> N;

    int term = -1;

    cout << "Series: ";
    for(int i = 1; i <= N; ++i) {
        cout << term << " ";
        term = term + 3;
        term = -term;  // Alternate the sign
    }

    return 0;
}
