#include <bits/stdc++.h>

using namespace std;


int main(){

    int N;
    
    
    cin >> N;

    int aux;
    int ant1 = 0;
    int ant2 = 1;

    for(int i = 0; i < N; i++){
        aux = ant1 + ant2;
        ant1 = ant2;
        ant2 = aux;
    }


    cout << aux << endl;



    return 0;
}