#include <bits/stdc++.h>

using namespace std;

int main(){

    int t, n;
    bool thorn_behind = false;

    cin >> t;

    while(t--){
        int coins = 0;
        cin >> n;
        vector<char> path(n);
        for(auto &i: path) cin >> i;


        for(int i = 0; i < n; i++){
            if(path[i] == '@') coins++;

            else if(path[i] == '*'){
                if(thorn_behind){ 
                    break;
                }
                thorn_behind = true;
                continue;
            }

            thorn_behind = false;

        }

        cout << coins << endl;
    }

    return 0;
}