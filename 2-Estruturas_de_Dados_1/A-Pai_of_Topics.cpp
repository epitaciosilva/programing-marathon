#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, x, cont = 0;

    cin >> n;
    long long A[n] = {};
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> x;
        A[i] -= x;
    }
    sort(A, A+n);

    int i=0, j = n-1;

    while ( i < j) {
        if (A[i] + A[j] > 0) {
            cont += j - i;
            j--;
        } else {
            i++;
        }
    }
    cout << cont << endl;
    return 0;
}
