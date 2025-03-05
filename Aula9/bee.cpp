#include <bits/stdc++.h>

using namespace std;

/*
    time limit hmmmm
    ideia3:
        se tiver valores iguais, da pra aumentar a eficiencia pra nn ter q ficar fazendo um monte de vez a msm coisa
        salva frequencia do valor do polen
        qnd

        deu errado ainda
    
    3.5: 
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
    ???? nem sei oq isso faz mas fez ficar mais eficiente obrigado gpt

    -> otimiza entradas e saidas ok

    demorei mt nesse slc

*/


int sumDigits(int x) {
    int res = 0;
    while (x > 0) {
        res += x % 10;
        x /= 10;
    }
    return res;
}

int main() {
    
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;
    
    unordered_map<int, int> freq;
    priority_queue<int> fila;
    
    for (int i = 0; i < N; ++i) {
        int f;
        cin >> f;
        freq[f]++;
        fila.push(f);
    }
    
    int res = 0;
    while (K > 0) {
        while (!fila.empty()) {
            int current = fila.top();
            // verifica se o max existe ainda
            if (freq.count(current) && freq[current] > 0) {
                break;
            }
            fila.pop();
        }
        
        if (fila.empty()) {
            res = 0;
            break;
        }
        
        int V = fila.top();
        int amount = freq[V];
        
        if (K <= amount) {
            // tem uma frequencia maior do que a quantidade de steps q faltam
            // logo o resultado vai ser o sumDigits desse valor
            res = sumDigits(V);
            break;
        } else {
            K -= amount;
            int s = sumDigits(V);
            int V_new = V - s;
            if (V_new > 0) {
                freq[V_new] += amount;
                fila.push(V_new);
            }
            freq.erase(V);
        }
    }
    
    cout << res << endl;
    
    return 0;
}