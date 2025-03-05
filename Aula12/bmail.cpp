#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> parent(n + 1); 
    for (int i = 2; i <= n; i++){ 
        cin >> parent[i];
    }

    vector<int> res;
    int current = n;
    while (current != 1) {
        res.push_back(current);
        current = parent[current];
    }
    res.push_back(1);

    reverse(res.begin(), res.end());

    cout << res[0];
    for (int i = 1; i < res.size(); i++){
        cout << ' ' << res[i];
    }
    cout << endl;

    return 0;
}