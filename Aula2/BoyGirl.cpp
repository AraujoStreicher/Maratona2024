/*
    Maratona 2024 UFSCAR SOROCABA
    Gabriel Araujo Streicher
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    string name;
    int lenght, pos, amount = 0;
    int letters[26] = {0};

    cin >> name;
    lenght = name.length();

    for(int i = 0; i < lenght; i++){
        pos = name[i] - 'a';
        
        if(letters[pos] == 0){
            letters[pos] = 1;
            amount++;
        }
    }

    if(amount % 2)
        cout << "IGNORE HIM!" << endl;
    else
        cout << "CHAT WITH HER!" << endl;


    return 0;
}