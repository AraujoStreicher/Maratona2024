/*
    Gabriel Araujo Streicher
    Ufscar Sorocaba - Maratona 2024
*/

#include <bits/stdc++.h>

using namespace std;

int main (){
    int N, key;
    int A=0,B= 0;

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> key;
        if(key == 1)
            A = A ^ 1;
        else if(key == 2){
            A = A ^ 1;
            B = B ^ 1;
        }
    }   

    cout << A << endl;
    cout << B << endl;

    return 0;
}