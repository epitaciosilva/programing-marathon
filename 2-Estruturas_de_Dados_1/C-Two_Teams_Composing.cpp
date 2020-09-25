#include <iostream>
#include <map>


using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, n, num, dif, equals;
    bool par;
    cin >> t;
    while(t--) {
        map<int,int> numbers;
        dif = 0, equals = 0;
        par = false;

        cin >> n;
        
        if(n % 2 == 0) {
            par = true;
        }

        while(n--) {
            cin >> num;
            numbers[num] += 1;
            if(numbers[num] == 1) {
                dif++;
            } 
            if (numbers[num] > equals) {
                equals = numbers[num];
            }
        }

        if (equals == dif)
            equals -= 1;
        
        if (dif > equals)
            dif -= 1;

        if(dif > equals) 
            cout << equals << endl;
        else
            cout << dif <<  endl;
    }
    return 0;
}
