/*
    Gabriel Araujo Streicher
    Maratona 2024
    UFSCar Sorocaba
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int matriz[5][5];
    int pos_i, pos_j;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> matriz[i][j];
            if(matriz[i][j] == 1){
                pos_i = i;
                pos_j = j;
            }
        }
    }


    cout << abs(2 - pos_i) + abs(2 - pos_j) << endl;


    return 0;
}