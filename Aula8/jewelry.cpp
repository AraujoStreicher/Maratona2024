#include <bits/stdc++.h>

using namespace std;


int main(){

    int N;
    int mat[50][50];

    cin >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> mat[i][j];
        }
    }

    int menor = min(mat[0][0], mat[0][N-1]);
    menor = min(menor, mat[N-1][0]);
    menor = min(menor, mat[N-1][N-1]);

    if(menor == mat[0][0])              cout << "0" << endl;
    else if(menor == mat[0][N-1])       cout << "1" << endl;
    else if(menor == mat[N-1][N-1])     cout << "2" << endl;
    else                                cout << "3" << endl; 


    



    return 0;
}