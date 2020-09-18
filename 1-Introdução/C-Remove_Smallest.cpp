#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, a, aux;
    int A[50] = {};
    int B[100] = {};
    bool out; 
    
    cin >> t;   
    while(t--) {
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> a;
            B[a-1] = a;
        }
        sort(A, A+n);
        out = true;
        for (int i = 0; i < n-1; i++) {
            if (A[i+1] - A[i] > 1) {
                out = false;
                break;
            }
        }
        cout << (out ? "YES" : "NO") << endl;
    }
    
    return 0;
}
