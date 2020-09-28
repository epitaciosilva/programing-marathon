#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    string str;
    bool can = true;
    map<int,string> s;
    cin >> n;
    int sizes[n];
    
    for(int i =0; i < n; i++) {
        cin >> str;
        if (s[str.size()].compare("") != 0 && s[str.size()].compare(str) != 0) { // se duas palavras tiverem o mesmo tamanho elas devem ser iguais
             can = false;
        } else if(can) {
            s[str.size()] = str;
        }
        sizes[i] = str.size();
    }

    if(!can) {
        cout << "NO\n";
    } else { 
        sort(sizes,sizes+n);

        for(int i = 0; i < n-1; i++) {
            can = false;
            for(int j = 0; j < sizes[i+1]; j++) {
                if(s[sizes[i]].compare(s[sizes[i+1]].substr(j,sizes[i])) == 0) { // s[i] é uma substring da string seguinte
                    can = true;
                    break;
                }
            }
            if(!can) {
                cout << "NO\n";
                return 0;
            }
        }
        cout << "YES\n";
        for(int i = 0; i < n; i++) {
            cout << s[sizes[i]] << endl;
        }
    }
    return 0;
}
