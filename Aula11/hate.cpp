#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int n = s.size();

        vector<int> prefix0(n + 1, 0), prefix1(n + 1, 0);
        for (int i = 0; i < n; i++){
            prefix0[i + 1] = prefix0[i] + (s[i] == '0');
            prefix1[i + 1] = prefix1[i] + (s[i] == '1');
        }

        int total0 = prefix0[n];
        int total1 = prefix1[n];

        int min0to1 = INT_MAX;
        for (int i = 0; i <= n; i++){
            int aux = prefix1[i] + (total0 - prefix0[i]);
            min0to1 = min(min0to1, aux);
        }

        int min1to0 = INT_MAX;
        for (int i = 0; i <= n; i++){
            int aux = prefix0[i] + (total1 - prefix1[i]);
            min1to0 = min(min1to0, aux);
        }
        cout << min(min0to1, min1to0) << endl;
    }
    return 0;
}