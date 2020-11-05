#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, soma = 0, m1,m2, cont;
    int m[100], v[100];
    
    while(cin >> n) {
        cont = 2;
        m1 = 200;
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            if(i > 1){
                m1 = (m[i-2]+m[i-1]) % 100;
                m2 = (m[i-1]+v[i]) % 100;
                if(m1 < m2) {
                    m[i-2] = m1;
                    m[i-1] = v[i];
                    cont++;
                } else {
                    m[i-1] = m2;
                    m[i-2] = v[i-2];
                }
            } else {
                m[i] = v[i];
            }
        }
        for(int i = 0; i < n; i++) {
            cout << m[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
