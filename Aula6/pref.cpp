/*
    UFSCAR SOROCABA MARATONA 2024
    Gabriel Araujo Streicher
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, res;
    cin >> t;
    while(t--){
        int n, m, idx = 0;
        cin >> n >> m;
        res = 0;
        string a;
        string b;

        cin >> a >> b;

        for(int i = 0; i < b.size(); i++){
            if(a[idx] == b[i]){
                res++;
                idx++;
            }
        }
        cout << res << endl;

    }
    
    

    return 0;
}