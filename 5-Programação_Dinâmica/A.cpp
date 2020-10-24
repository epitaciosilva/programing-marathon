#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, s, num, value;
    cin >> s >> n;
    map<int, vector<int>> items;
    vector<int> values(n);

    for(int i = 0; i < n; i++) {
        cin >> num >> value;
        values[i] = value;
        items[value].push_back(num);
    }   
    
    sort(values.rbegin(), values.rend());

    //sort(items[values[i]].rbegin(), item[values[i]].rend());
    for(int i = 0; i < values.size(); i++) {
    }
    return 0;
}
