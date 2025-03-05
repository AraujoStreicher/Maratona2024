/*
    Gabriel Araujo Streicher
    Ufscar Sorocaba - Maratona 2024
*/

#include <bits/stdc++.h>

using namespace std;

int main (){
    int A, maior = 0;

    while(1){
        cin >> A;
        if(!A)
            break;
        else if(A > maior)
            maior = A;
    }

    cout << maior << endl;

    return 0;
}