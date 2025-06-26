#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

// Struct to define charging intervals
struct Interval {
    ll start, end, rate;
};

// Function to compute charging time
int compute_charging_time(ll S, ll T) {
    if (S >= T) return 0;

    vector<Interval> intervals = {
        {0, 10, 10},
        {11, 229, 5},
        {230, 559, 8},
        {560, 1009, 2},
        {1010, 5000, 7},
        {5001, 10000, 8},
        {10001, 1000000000LL, 3}
    };

    ll time = 0;
    ll current = S;

    for (const auto& interval : intervals) {
        if (current > interval.end) continue;

        ll interval_start = max(current, interval.start);
        ll interval_end = min(interval.end, T);

        if (interval_start > interval_end) continue;

        ll units_needed = interval_end - interval_start + 1;
        time += (units_needed + interval.rate - 1) / interval.rate; // Ceil division

        current = interval_end + 1;
        if (current > T) break;
    }

    return time;
}

int main() {
    // Sample input
    int Q = 2;
    vector<pair<ll, ll>> queries = {
        {0, 5},
        {10, 50}
    };

    // Process and print results
    for (int i = 0; i < Q; ++i) {
        ll S = queries[i].first;
        ll T = queries[i].second;
        int result = compute_charging_time(S, T);
        cout << result << endl;
    }

    return 0;
}
