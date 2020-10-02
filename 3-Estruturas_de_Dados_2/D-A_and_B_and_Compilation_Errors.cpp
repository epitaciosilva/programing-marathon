#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long t;
    map<long long,int> dict1, dict2;
    map<long long,int>::iterator it;
    cin >> n;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < n-i; j++) {
            cin >> t;

            if(i == 0) {
                dict1[t] += 1;
            } else if(i == 1) {
                dict2[t] +=1;
                dict1[t] -= 1;
                if(dict1[t] == 0) {
                    dict1.erase(t);
                }
            } else if(i == 2) {
                dict2[t] -= 1;
                if(dict2[t] == 0) {
                    dict2.erase(t);
                }
            }
        }
        if(i == 1) {
            it = dict1.begin();
            cout << it->first << endl;
        } else if(i == 2) {
            it = dict2.begin();
            cout << it->first << endl;
        }
    }
    return 0;
}
