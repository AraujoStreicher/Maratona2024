//
//  Maratona 2024 Ufscar Sorocaba
//  Gabriel Araujo Streicher
//

#include <bits/stdc++.h>

using namespace std;

int main(){

    int price, moeda;

    cin >> price >> moeda;

    for(int i = 1; i <= 10; i++){
        if((i * price) % 10 == moeda || (i * price) % 10 == 0){
            cout << i << endl;
            return 0;
        }
    }    

    return 0;
}