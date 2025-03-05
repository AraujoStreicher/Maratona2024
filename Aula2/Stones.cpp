/*
    Maratona 2024 UFSCAR SOROCABA
    Gabriel Araujo Streicher
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, count = 0;
    string letras;

    cin >> n;
    cin >> letras;
    
    if(n > 1)
        for(int i = 1; i < n; i++){
            if(letras[i] == letras[i-1]){
                count++;
            }
        }

    cout << count << endl;

    return 0;
}