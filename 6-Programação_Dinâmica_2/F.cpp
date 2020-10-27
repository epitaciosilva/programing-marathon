#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,cont, maior = 0;
    char s;
    cin >> n;
    map<int,int> ss;
    int t[200000] = {};

    for(int i = 0; i < n; i++) {
        cin >> s;
        if(s == '1') {
            cont++;
        } else {
            cont--;
        }
        if(cont < 0 && t[99999-cont] == 0) {
            t[99999-cont] = 1;
            ss[cont] = i;
        } else if(cont > 0 && t[cont] == 0) {
            t[cont] = 1;
            ss[cont] = i;
        } else if(cont == 0 && i+1 > maior) {
            maior = i+1;
        } else if(i-ss[cont] > maior){
            maior = i-ss[cont];
        }
    }
    cout << maior << endl;
    return 0;
}
