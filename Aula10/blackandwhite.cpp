#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        vector<int> pre(n + 1, 0);

        for (int i = 0; i < n; ++i){
            pre[i + 1] = pre[i] + (s[i] == 'W' ? 1 : 0);
        }

        int res = k;
        for (int j = 0; j <= n - k; j++){
            int current = pre[j + k] - pre[j];
            res = min(res, current);
        }
        cout << res << '\n';
    }
    return 0;
}