#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while (t--){
        long long n, res = 0;
        cin >> n;
        while (n > 0){
            res += n;
            n /= 2;
        }
        cout << res << '\n';
    }
    return 0;
}