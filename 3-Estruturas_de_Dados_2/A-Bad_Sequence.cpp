#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, erros = 0;
    string c;
    stack <char> pilha;

    cin >> n;
    cin >> c;
    
    for(auto s:c) {
        if (s == '(') {
            pilha.push('(');
        } else {
            if(pilha.empty() || pilha.top() != '(') {
                erros++;
                if (erros > 1) {
                    cout << "NO\n";
                    return 0;
                }
            } else {
                pilha.pop();
            }
        }
    }

    if(n % 2 != 0 || pilha.size() > 1) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
    return 0;
}
