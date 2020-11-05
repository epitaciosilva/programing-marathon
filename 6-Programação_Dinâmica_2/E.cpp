#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

struct Item {
    int peso, valor;
};
const int EMPTY = -1;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, s, total;
    cin >> s >> n;
    vector<Item> v(n);
    int mem[n][s+1] = {};
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <=s; j++) {
            cout << mem[i][j] << " ";
        }
        cout << endl;
    }
    for(auto &x : v) {
        cin >> x.peso >> x.valor;
    }
    
    mem[0][0] = -1;
    mem[0][v[0].peso] = v[0].valor;

    for(int i = 1; i < n; i++) {
        for(int j = 0; j <=s; j++) {
            if(mem[i-1][j] != 0) {
                cout << i << "  " << j << endl;
                mem[i][j] = max(mem[i-1][j], mem[i][j]);
                total = j+v[i].peso;
                if(total <= s) {
                    mem[i][total] = max(mem[i][total], mem[i-1][j] + v[i].valor);
                }
            }
        }
    }
    cout << n << endl;

    return 0;
}
