//
//  Maratona 2024 Ufscar Sorocaba
//  Gabriel Araujo Streicher
//

#include <bits/stdc++.h>

using namespace std;

int main(){
    int cor;
    set <int> cores;

    for(int i = 0; i < 4; i++){
        cin >> cor;
        cores.insert(cor);
    }
    
    cout << 4-cores.size() << endl;


    return 0;
}