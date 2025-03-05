/*
    Maratona 2024 UFSCAR SOROCABA
    Gabriel Araujo Streicher
*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, h, height, width = 0;

    cin >> n >> h;

    for(int i = 0; i < n; i++){
        cin >> height;
        if(height > h)
            width += 2;
        else
            width += 1;
    }

    cout << width << endl;

    return 0;
}