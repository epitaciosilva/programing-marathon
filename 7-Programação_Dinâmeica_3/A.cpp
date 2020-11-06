#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t, e,f,n,peso;
    // int p[500001], w[10001];
    
    cin >> t;
    while(t--) {
        cin >> e >> f;
        cin >> n;
        peso = f-e;
        vector<int> m(peso+1, 10000000);
        int p[n+1], w[n+1];
        m[0] = 0;
        for(int i = 1; i <=n; i++) {
            cin >> p[i] >> w[i];
        }
        
        for(int i =1; i<=n; i++) {
            for(int j=w[i]; j<=peso; j++) {
                m[j] = min(m[j], m[j-w[i]]+p[i]);
            }
        }
        
        if(m[peso]==10000000) {
            cout << "This is impossible.\n";
        } else {
            cout << "The minimum amount of money in the piggy-bank is " << m[peso] << "."<< endl; 
        }
    }
    
    return 0;
}
