/*
    Gabriel Araujo Streicher
    Maratona 2024
    UFSCar Sorocaba
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string com;
    int x = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> com;
        for(int j = 0; j < 3; j++){
            if (com[j] == '+'){
                x++;
                break;
            }
            else if (com[j] == '-'){
                x--;
                break;
            }
        }
    }

    cout << x << endl;

    return 0;
}