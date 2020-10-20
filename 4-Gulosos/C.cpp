#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>


using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, cont = 0;
    int v[5] = {100,20,10,5,1};
     
    cin >> n;
    for(int i = 0; i < 5; i++) {
        cont += n/v[i];
        n = n%v[i];
    }

    cout << cont << endl;
}
    
