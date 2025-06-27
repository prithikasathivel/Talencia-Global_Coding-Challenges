#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of terms (N): ";
    cin >> N;

    int term = 0;

    cout << "Number Series: ";
    for(int i = 1; i <= N; ++i) {
        term = term + i;  // Adding current index to previous term
        cout << term << " ";
    }

    return 0;
}
