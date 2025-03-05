#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> p(3);
        cin >> p[0] >> p[1] >> p[2];

        int sum = p[0] + p[1] + p[2];

        if (sum % 2 != 0) {
            cout << -1 << endl;
            continue;
        }
        
        cout << min(sum / 2, p[0]+p[1]) << endl;

    }
    return 0;
}