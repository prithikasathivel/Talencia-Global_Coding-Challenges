#include <bits/stdc++.h>
using namespace std;

int majorityElement(const vector<int>& arr) {
    int candidate = 0, count = 0;
    for (int num : arr) {
        if (count == 0) {
            candidate = num;
            count = 1;
        } else if (num == candidate) {
            count++;
        } else {
            count--;
        }
    }
    // Optional validation if majority existence isn't guaranteed
    // count = 0;
    // for (int num : arr) if (num == candidate) count++;
    // if (count > arr.size() / 2) return candidate;
    return candidate;
}

int main() {
    vector<int> X = {2, 12, 2, 2, 2, 4, 2};
    cout << majorityElement(X) << "\n";  // Outputs 2
    return 0;
}
