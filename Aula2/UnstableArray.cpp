/*
    Maratona 2024 UFSCAR SOROCABA
    Gabriel Araujo Streicher
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, lenght, sum;
    cout << "Oi" << endl;
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> lenght >> sum;

        if(lenght == 1)
            cout << 0 << endl;
        else if(lenght == 2)
            cout << sum << endl;
        else 
            cout << 2*sum << endl;
    }

    return 0;
}