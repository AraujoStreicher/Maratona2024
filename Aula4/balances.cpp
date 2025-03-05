/*
    MARATONA 2024
    UFSCAR SOROCABA
    Gabriel Araujo Streicher
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, k, p;
    vector<int> nums;
    cin >> t;

    for(int i = 0; i < t; i++){

        cin >> n >> k;
        for(int j = 0; j < n; j++){
            cin >> p;
            nums.push_back(p);
        }

        sort(nums.begin(),nums.end());

        int corta = 0;
        int cnt = 1;
        for(int i = 1; i < n; i++){
            if(nums[i] - nums[i-1] <= k){
                cnt++;
            } else{
                corta = max(corta,cnt);
                cnt = 1;
            }
        }

        corta = max(corta,cnt);

        cout << n-corta << endl;

        nums.clear();
    
    }
    return 0;
}