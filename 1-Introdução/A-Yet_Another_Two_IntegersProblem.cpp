#include<iostream>
using namespace std;

int main() {
    int a, b, t, dif, div;
    cin >> t;
    bool res;

    while(t--) {
        cin >> a >> b;
           
        if (a > b) {
            int c = a;
            a = b;
            b = c;
        }
	    dif = b - a;
    	div = dif / 10;
	    res = dif % 10 != 0;
    	if (res) {
            div +=1;	
	    }
    	cout << div << endl;
    }
    
    return 0;
}
