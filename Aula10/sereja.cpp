#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> cards(n);
    for(auto &i: cards) cin >> i;

    int i_min = 0;
    int i_max = n-1;
    
    int res1 = 0;
    int res2 = 0;

    bool first_turn = true;

    while(i_max >= i_min){
        if(first_turn){
            res1 += (cards[i_min] >= cards[i_max]) ? cards[i_min++] : cards[i_max--];
        } else{
            res2 += (cards[i_min] >= cards[i_max]) ? cards[i_min++] : cards[i_max--];
        }

        first_turn = !first_turn;
    }

    cout << res1 << " " << res2 << endl;


    return 0;
}