/*
    Gabriel Araujo Streicher
    Ufscar Sorocaba - Maratona 2024
*/

#include <bits/stdc++.h>

using namespace std;

int main (){
    int P,R;

    cin >> P >> R;

    if(!P)
        cout << "C" << endl;
    else if(R)
        cout << "A" << endl;
    else if(!R)
        cout << "B" << endl;
   
    return 0;
}