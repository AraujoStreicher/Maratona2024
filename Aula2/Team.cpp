/*
    Maratona 2024 UFSCAR SOROCABA
    Gabriel Araujo Streicher
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, voto, votes = 0, amount = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> voto;
            if(voto)
                votes++;
        }
        
        if(votes >= 2)
            amount++;
        
        votes = 0;
        voto = 0;
    }

    cout << amount << endl;

    return 0;
}