#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    string str;
    map<int,string> s;
    int sizes[n];

    cin >> n;

    for(int i =0; i < n; i++) {
        cin >> str;
        s[str.size()] = str;
        sizes = str.size();
    }
    
    sort(sizes,sizes+n);
    for()

    return 0;
}
