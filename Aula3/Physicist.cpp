/*
    Gabriel Araujo Streicher
    Maratona 2024
    UFSCar Sorocaba
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int sum_x = 0, sum_y = 0, sum_z = 0;
    int x,y,z;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x >> y >> z;
        sum_x += x;
        sum_y += y;
        sum_z += z;
    }

    if(!sum_x && !sum_y && !sum_z)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}