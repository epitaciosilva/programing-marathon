#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int v2[n], v[n] = {};
    for(int a = 0; a < n; a++) {
        cin >> v[a];
    }
    sort(v, v+n);
    int i = 0, j = n/2, k = 0;
    int cont = 0;
    while(i < n/2) {
        v2[k] = v[j];
        v2[k+1] = v[i];
        if(k > 0 && v2[k-1] < v2[k-2] && v2[k-1] < v2[k]) {
            cont++;
        }
        k+=2;
        i++;
        j++;
    }
    if(n % 2 != 0) {
        v2[k] = v[j];
        if(v2[k-1] < v2[k-2] && v2[k-1] < v2[k]) {
            cont++;
        }
    }
    cout << cont << endl;
    for(int i  =0; i < n; i++) {
        cout << v2[i] << " ";
    }
    cout << endl;
    return 0;
}
