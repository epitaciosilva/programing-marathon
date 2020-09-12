#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, a, cont = 0, max = 0;
    vector<int> A;

    cin >> n;
    while(n--) {
        cin >> a;
        A.push_back(a);
        if (a == 1) {
            cont++;
            if(cont > max) {
                max = cont;
            }
        } else {
            cont = 0;
        }
    }
    for (int i : A){ 
        if (i == 1) {
            cont++;
            if(cont > max) {
                max = cont;
            }
        } else {
            cont = 0;
        }
    }
    cout << max << endl; 
    return 0;
}
