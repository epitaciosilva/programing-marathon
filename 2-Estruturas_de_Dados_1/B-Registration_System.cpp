#include <iostream>
#include <string>
#include <map>


using namespace std;
// utilizar o map do c++ (transforma string pra int)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    map<string, int> names;
    string name;

    cin >> n;
    while(n--) {
        cin >> name;
        if (names[name] == 0) {
            names[name] += 1;
            cout << "OK\n";
        } else {
            names[name + to_string(names[name])] = 1; 
            cout << (name + to_string(names[name])) << endl; 
            names[name] += 1;
        } 
    }

    return 0;
}
