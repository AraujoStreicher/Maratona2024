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
        cin >> n;
        vector<int> nums;
        for(int j = 0; j < n; j++){
            cin >> p;
            nums.push_back(p);
        }
    

        sort(nums.begin(), nums.end());

        int soma = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] >= 0){
                soma += nums[i];
            }
            else{
                soma += abs(nums[i]);
            }
        }

        cout << soma << endl;
    }
    return 0;
}