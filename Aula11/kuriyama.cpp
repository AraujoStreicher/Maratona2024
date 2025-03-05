#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> stones(n);
    for (auto &i : stones) cin >> i;

    vector<int> ordered_stones = stones;
    sort(ordered_stones.begin(), ordered_stones.end());

    vector<long long> prefix1(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        prefix1[i] = prefix1[i - 1] + stones[i - 1];
    }

    vector<long long> prefix2(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        prefix2[i] = prefix2[i - 1] + ordered_stones[i - 1];
    }

    int t;
    cin >> t;

    while (t--) {
        int type, l, r;
        cin >> type >> l >> r;

        if (type == 1) {
            cout << prefix1[r] - prefix1[l - 1] << endl;
        } else {
            cout << prefix2[r] - prefix2[l - 1] << endl;
        }
    }

    return 0;
}