#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long x = 0, y = 0; 
    cin >> n; 
    int A[n] = {};
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }
    
    sort(A, A+n);
    for(int i = 0; i < n; i++) {
        if (i < n/2) {
            y+=A[i];
        } else {
            x+=A[i];
        }
    }
    cout << x*x + y*y << endl; 
    return 0;
}
