#include <iostream>
#include <string>
#include <map>
#include <vector>


using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, num;
    int v[100000] = {};
    cin >> t;
    while(t--) {
        cin >> n;
        map<int, vector<int>> dict;
        
        for(int i = 0; i < n; i++) {
            cin >> num;
            dict[num].push_back(i);

        }
        int menor = n+1;
        for(map<int, vector<int>>::iterator it = dict.begin(); it != dict.end(); it++) {
            if(it->second.size() > 1) {
                for(int i = 0; i < it->second.size()-1; i++) {
                    if(menor > (it->second[i+1] - it->second[i])) {
                        menor = (it->second[i+1] - it->second[i]); 
                    }
                } 
            }
        }
        if(menor == n+1) 
            cout << -1 << endl;
        else
            cout << menor+1 << endl;
    }
    return 0;
}
