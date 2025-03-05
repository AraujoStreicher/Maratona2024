/*
    UFSCAR SOROCABA MARATONA 2024
    Gabriel Araujo Streicher
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int t, par, impar, res;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector <int> array(n);

        for(auto &i:array) cin >> i;

        impar = 0;
        par = 0;
        for(int i = 0; i < n; i++){
            if(i % 2 != array[i] % 2){
                if(array[i] % 2 == 1)impar++;
                else par++;
            }
        }

        if(par != impar) cout << "-1" << endl;
        else cout << par << endl;

    }

    return 0;
}