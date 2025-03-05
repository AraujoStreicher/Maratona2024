/*
    MARATONA 2024
    UFSCAR SOROCABA
    Gabriel Araujo Streicher
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, p;

    cin >> t;

    for(int i = 0; i < t; i++){
        vector<int> nums;
        int soma = 0;
        cin >> n;
        for(int j = 0; j < 2*n; j++){
            cin >> p;
            nums.push_back(p);
        }

        sort(nums.begin(), nums.end());

        for(int i = 0; i < 2*n; i += 2){
            soma += min(nums[i], nums[i+1]);
        }

        cout << soma << endl;

    }
    return 0;
}