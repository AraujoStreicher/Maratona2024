/*
    MARATONA 2024
    UFSCAR SOROCABA
    Gabriel Araujo Streicher
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> point;
    int p;
    for(int i = 0; i < 3; i++){
        cin >> p;
        point.push_back(p);
    }

    sort(point.begin(),point.end());

    cout << point[2] - point[0];

    return 0;
}