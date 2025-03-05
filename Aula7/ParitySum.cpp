#include <bits/stdc++.h>

using namespace std;


int main(){

    int t, n, num, res;

    cin >> t;

    while(t--){
        res = 0;
        cin >> n;
        

        for(int i = 0; i < n; i++){
            cin >> num;
            if(num % 2 == 0) res++;
        }

        cout << min(res, n-res) << endl;

    }


    return 0;
}