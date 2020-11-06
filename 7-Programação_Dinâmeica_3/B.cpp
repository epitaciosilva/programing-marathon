#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, cont = 3;
    cin >> n;
   
    if(n == 1) {
        cout << 0 << endl;
        return 0;
    }
    
    long long pro, ant;
    pro = 3;
    
    for(int i = 3; i < n+1; i++) {
         ant = pro;
         pro = (pro*2) % 1000000007;
         if(i > 3) {
            pro = (pro+(3*cont)) % 1000000007;
            cont = ant;
         }
    }
    cout << pro % 1000000007 << endl;
    return 0;
}
