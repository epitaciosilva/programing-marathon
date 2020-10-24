#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, uns, zeros, maior = 0, diff, idx = 1;
    int memory[100000] = {};
    char s;
    
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> s;
        if(s != '0') {
            memory[i] = i == 0 ? 1 : memory[i-1] + 1;        
        } else {
            memory[i] = i == 0 ? 0 : memory[i-1];
        }
        
    }

    zeros = n - memory[n-1];
    diff = zeros > memory[n-1] ? memory[n-1] : zeros;
    diff *=2;

    for(int i = 0; i < n; i++) {
        if(maior < diff) {
            for(int j = n-1; j > i; j--) {
                if(j-i+1 - maior+2 < 0) {
                    break;
                }
                uns = i == 0 ? memory[j] : memory[j] - memory[i-1];
                if(j+1-uns == 0 && j-diff > 0) {
                    i = j-diff;
                    break;
                }
                if(j-i+1 > maior && j-i+1 - uns == uns) {
                    maior = j-i+1;
                }
            }
        } else {
            break;
        }
    }
    cout << maior << endl;
    return 0;    
}
