//
//  Maratona 2024 Ufscar Sorocaba
//  Gabriel Araujo Streicher
//

#include <bits/stdc++.h>

using namespace std;

int main(){

    int t, qtdRetirar, qtdTeste, players;
    int Retirar[101];
    //vector<int> Teste;

    cin >> t;

    while(t--){
        cin >> qtdRetirar >> qtdTeste;
        for(int i = 0; i < qtdRetirar; i++)
            cin >> Retirar[i];

        for(int i = 0; i < qtdTeste; i++){
            cin >> players;
            if(players < Retirar[0]){
                cout << players << " ";
            } else{
                cout << Retirar[0] - 1 << " ";
            }
        }

        cout << endl;
    }
    

    return 0;
}