#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, d = 0, cont = 1;
    string str;

    cin >> n;
    while(n--) {
        cin >> str;
        cont = 1;
        d = 0;
        for(int i = str.size()-1; i >= 0; i--) {
            if(str[i] == 'R') {
                cont =1;
            } else {
                cont +=1;
            }
            if (cont > d) {
                d = cont;
            }
        }
        cout << d << endl;
    }
    return 0;
}
