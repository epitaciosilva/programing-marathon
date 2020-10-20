#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>


using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);

    for(auto &x: v) {
        cin >> x;
    }
    sort(v.rbegin(), v.rend());

    int c1 = 0, c2 = 0;
    for(auto x : v) {
        if(c1 > c2)
            c2+=x;
        else
            c1+=x;
    }
    if(c1 == c2)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
