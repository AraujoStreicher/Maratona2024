//
//  Maratona 2024 Ufscar Sorocaba
//  Gabriel Araujo Streicher
//

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, first = 0, second = 1, res = 0, aux;
    
    cin >> n;

    vector<int> v(n);
    for(auto &i:v) cin >> i;

    if(n == 1){ cout << "0" << endl; return 0;}


    for(int i = 1; i < n; i++){
        
        if(v[i] == v[i-1]){
            second++;

            if(i == n-1){
                if(first){
                    aux = min(first, second);
                    res = max(aux, res);
                }
                first = second;
                second = 1;
            }

        } else{
            if(i == 1){
                res = 1;
            }
            if(first){
                aux = min(first, second);
                res = max(aux, res);
            }

            if(!first && i == n - 1){
                res = 1;
            }

            first = second;
            second = 1;

            
        }
    }

    cout << res * 2 << endl;


    return 0;
}