#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, res;
        cin >> n;
        vector<int> v(n);

        for(auto &i: v) cin >> i;

        sort(v.begin(), v.end());

        res = v[0]; //começar com 0 quebra o caso 5 5 5 5 5
        for(int i = 1 ; i < n; i++){
            res = (res + v[i]) / 2;
        }

        cout << res << endl;

    }

    return 0;
}