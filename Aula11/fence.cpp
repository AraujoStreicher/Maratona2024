#include <bits/stdc++.h>

using namespace std;

// no lugar de somar os k valores toda iteraçao -> excluir o antigo [i-1] e somar o novo da sequencia[i+k+i]

int main() {
    
    int n, k;
    cin >> n >> k;

    vector<int> h(n);
    for(auto &i: h) cin >> i;
    
    int soma = 0;
    for (int i = 0; i < k; i++) {
        soma += h[i];
    }
    
    int min_soma = soma;
    int min_idx = 0;
    
    for (int i = 1; i <= n - k; i++) {
        soma = soma - h[i - 1] + h[i + k - 1];
        if (soma < min_soma) {
            min_soma = soma;
            min_idx = i;
        }
    }
    
    cout << min_idx + 1 << endl;
    
    return 0;
}