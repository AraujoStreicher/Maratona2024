#include <bits/stdc++.h>

using namespace std;

int main(){


    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        vector<char> string(n);
        for(auto &i: string) cin >> i;

        int res = 0;
        for(int i = 0; i < n; i++){
            if(string[i] == 'W') continue;
            else if(string[i] == 'B'){
                res++;
                i += k-1;
            }
        }

        cout << res << endl;

    }

   


    return 0;
}