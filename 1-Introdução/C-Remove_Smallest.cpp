#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, a, aux;
    int A[50] = {};
    bool out; 

    cin >> t;   
    while(t--) {
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> A[i];
        }
        sort(A, A+n);
        out = true;
        for (int i = 0; i < n-1; i++) {
            if (A[i+1] - A[i] > 1) {
                out = false;
            }
        }
        cout << (out ? "YES" : "NO") << endl;
    }
    
    return 0;
}
