/*
    MARATONA 2024
    UFSCAR SOROCABA
    Gabriel Araujo Streicher
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    vector<int> nums;
    cin >> s;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == '+'){
            continue;
        } else{
            nums.push_back(s[i] - '0');
        }
    }

    sort(nums.begin(), nums.end());

    cout << nums[0];
    for(int i = 1; i < nums.size(); i++){
        cout << "+";
        cout << nums[i];
    }



    return 0;
}