#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int ready[100];
int value[100];
int coins[3] = {1,3,4};

int solve(int x) {

    if(x <= 0) return 0;
    if(ready[x]) return value[x];

    int best = 1000;
    for(auto c: coins) {
        best = min(best, solve(x-c)+1);
    }
    ready[x] = true;
    value[x] = best;

    return best;
}


int main() {
    cout << solve(9) << endl;
    for(int i = 0; i < 9; i++) {
        cout << i << " : " << value[i] << endl;
    }
    return 0;
}