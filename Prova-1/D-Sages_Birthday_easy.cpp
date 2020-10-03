#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long v[100000] = {};
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v, v+n);
    int i = 0, j = n/2;
    if (n % 2 == 0) {
        cout << j - 1 << endl;
        while(j < n) {
            cout << v[j] << " " << v[i] << " "; 
            i++;
            j++;
        }
    } else {
        cout << j << endl;
        while(i < n/2) {
            cout << v[j] << " " << v[i] << " "; 
            i++;
            j++;
        }
        cout << v[j];
    }
    cout << endl;
    return 0;
}
