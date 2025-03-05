#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> stones(n);
        
        for(auto &i: stones) cin >> i;
    
        auto min_i = min_element(stones.begin(), stones.end());
        auto max_i = max_element(stones.begin(), stones.end());
        int min_pos = min_i - stones.begin();
        int max_pos = max_i - stones.begin();
        
        int left = min(min_pos, max_pos);
        int right = max(min_pos, max_pos);

        int opt1 = right + 1;            
        int opt2 = n - left;             
        int opt3 = (left + 1) + (n - right);  
        
        cout << min(opt1, min(opt2, opt3)) << endl;
    }
    
    return 0;
}