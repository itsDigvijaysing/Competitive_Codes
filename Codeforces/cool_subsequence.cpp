#include <bits/stdc++.h>
using namespace std;

bool isCool(const vector<int> &subseq, const unordered_multiset<int> &complement) {
    int m = subseq.size();
    for (int mask = 1; mask < (1 << m); mask++) {
        long long sum = 0, count = 0;
        for (int i = 0; i < m; i++) {
            if (mask & (1 << i)) {
                sum += subseq[i];
                count++;
            }
        }
        if (sum % count != 0 || complement.find(sum / count) == complement.end()) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) cin >> arr[i];

        bool found = false;
        for (int mask = (1 << N) - 1; mask > 0; mask--) {
            vector<int> subseq;
            unordered_multiset<int> complement;
            for (int i = 0; i < N; i++) {
                if (mask & (1 << i)) {
                    subseq.push_back(arr[i]);
                } else {
                    complement.insert(arr[i]);
                }
            }
            if (!subseq.empty() && subseq.size() < N && isCool(subseq, complement)) {
                cout << subseq.size() << "\n";
                for (int x : subseq) cout << x << " ";
                cout << "\n";
                found = true;
                break;
            }
        }
        if (!found) cout << -1 << "\n";
    }
    return 0;
}
