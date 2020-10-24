#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, z = 0, u = 0, menor;
    int zeros[100000] = {}, uns[100000] = {};
    char s;
    string str;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> s;
        str += s;
        if(s == '0') {
            zeros[z++] = i;
        } else {
            uns[u++] = i;
        }
    }
        
    //
    if(z > u) 
        menor = u;
    else
        menor = z;

    return 0;
}
