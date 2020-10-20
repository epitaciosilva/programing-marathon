#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, num, cont = 0;
    long long soma = 0;
    cin >> n; 
    int v[n];

    for(int i = 0; i < n; i++) {
        cin >> v[i];
        soma += v[i];
    }
    sort(v, v+n);
    int totalSum = 0;
    for(int i = n-1; i >=0; i--) {
        totalSum +=v[i];
        if(2*totalSum > soma) {
            cout << n-i << endl;
            break;
        }
    }


    return 0;
}
