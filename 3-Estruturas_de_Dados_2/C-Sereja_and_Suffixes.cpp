#include <iostream>
#include <string>
#include <map>
#include <unordered_set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, t;
    int ns[100000] = {};
    unordered_set<int> set;

    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> ns[i];        
    }
    for(int i = n-1; i >=0; i--) {
        if(set.find(ns[i]) == set.end()) {
            set.insert(ns[i]);
        }
        ns[i] = set.size();
    }

    for(int i = 0; i < m; i++) {
        cin >> t;
        cout << ns[t-1] << endl;
    }

    return 0;
}
