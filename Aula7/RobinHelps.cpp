#include <bits/stdc++.h>

using namespace std;


int main(){

    int t, n , k;
    int gold, res;

    cin >> t;

    while(t--){
        gold = 0;
        res = 0;
        cin >> n >> k;
        vector<int> vetor(n);
        for(auto &i:vetor) cin >> i;

        for(int i = 0; i < n; i++){
            if(vetor[i] >= k) gold += vetor[i];
            else if(vetor[i] == 0 && gold > 0){
                gold--;
                res++;
            }
        }


        cout << res << endl;

    }


    return 0;
}