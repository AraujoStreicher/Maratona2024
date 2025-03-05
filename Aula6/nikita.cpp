/*
    UFSCAR SOROCABA MARATONA 2024
    Gabriel Araujo Streicher
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    int n, m;
    cin >> t;

    while(t--){
        cin >> n >> m;
        if(n >= m && ((m-n) % 2) == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}