#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, t, num, j, index;
    long long soma, maior, maiorTodas;
    bool zero;

    cin >> t;
    while(t--) {
        cin >> n;

        soma = 1;
        vector<long long> somas(n-4, 1);
        vector<vector<int>> v(n-4);
        j = 0;
        zero = false;
        maiorTodas = 0;
        for(int i = 0; i < n; i++) {
            cin >> num;
         
            if(i < 5) {
                v[0].push_back(num);
                somas[0] *= num;
                maiorTodas = somas[0];
            } else {
                j++;
                v[j] = v[0];
                somas[j] = somas[0];
                maior = somas[0];
                for(int l = 0; l < j; l++) {
                    for(int k = 0; k < 5; k++) {
                        if(v[l][k] != 0 && (somas[l]/v[l][k]) * num > maior) {
                            maior = (somas[l]/v[l][k]) * num; 
                            index = k;
                        } 
                    }
                    if(maior > somas[j]) {
                        somas[j] = maior;
                        v[j] = v[l];
                        v[j][index] = num;
                        index = j;
                    }
                }
                if(somas[j] > maiorTodas) {
                    for(int i = 0; i < 5; i++) {
                        cout << v[index][i] << " ";
                    }
                    cout << endl;
                    maiorTodas = somas[j];
                }
            }
        }
        
        cout << maiorTodas << endl;
    }

    return 0;
}