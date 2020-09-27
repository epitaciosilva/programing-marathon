#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long books[100000] = {};
    long long t, sum = 0, big = 0, cont = 0;

    cin >> n;
    cin >> t;
    for(int i = 0; i < n; i++) {
        cin >> books[i];
        sum += books[i];
    }
    if(sum < t) {
        cout << n << endl;
    } else {
        sum = 0;
        for(int i = 0; i < n; i++) {
            sum += books[i];
            cout << i << " ";
            for (int j = i+1; j < n; j++) {
                sum += books[j];
                cont++;
                if (sum > t) {
                    sum -= books[i];
                    cont -=1;
                    break;
                }        
            }
            if(cont > big) {
                big = cont;
            }
            i
        }
        cout << endl << big << endl;
    }
    return 0;
}
