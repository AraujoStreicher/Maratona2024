#include <bits/stdc++.h>

using namespace std;

int main(){


    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<char> string(n);
        for(auto &i: string) cin >> i;

        int i_min = 0;
        int i_max = n-1;

        int res = 0;
        while(i_max >= i_min){
            if(string[i_min] == string[i_max]){
                res = i_max - i_min + 1;
                break;
            }

            i_min++;
            i_max--;
        }

        cout << res << endl;

    }

   


    return 0;
}