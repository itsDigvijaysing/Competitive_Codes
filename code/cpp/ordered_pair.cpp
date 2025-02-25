// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// void solve() {
//     ll k, l1, r1, l2, r2;
//     cin >> k >> l1 >> r1 >> l2 >> r2;

//     // Precompute all powers of k that fit in the range of ll
//     vector<ll> powers;
//     ll p = 1;
//     while (p <= r2) {
//         powers.push_back(p);
//         if (p > r2 / k) break; // Avoid overflow
//         p *= k;
//     }

//     ll count = 0;

//     // Iterate over precomputed powers of k
//     for (ll power : powers) {
//         // y = x * power -> x = y / power
//         // Determine the range of x for this power
//         ll x_min = max(l1, (l2 + power - 1) / power); // ceil(l2 / power)
//         ll x_max = min(r1, r2 / power);              // floor(r2 / power)

//         if (x_min <= x_max) {
//             count += (x_max - x_min + 1);
//         }
//     }

//     cout << count << endl;
// }

// int main() {
//     int t;
//     cin >> t; // Number of test cases
//     while (t--) {
//         solve();
//     }
//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

#define int long long

int32_t main() {
    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        int base, left1, right1, left2, right2;
        cin >> base >> left1 >> right1 >> left2 >> right2;

        vector<int> powers;
        int current = 1;
        while (current <= right2) {
            powers.push_back(current);
            if (current > right2 / base) break;
            current *= base;
        }

        int result = 0;

        for (int power : powers) {
            int min_x = max(left1, (left2 + power - 1) / power);
            int max_x = min(right1, right2 / power);

            if (min_x <= max_x) {
                result += (max_x - min_x + 1);
            }
        }

        cout << result << endl;
    }
    return 0;
}