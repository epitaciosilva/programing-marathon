#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, tprimo = 0;
	double raiz, root;
	long long int num;
	
	cin >> n;
	for(; n > 0; n--) {
		cin >> num;
		tprimo = 0;	
		if(num == 4) {
			cout << "YES\n";
		} else if(num % 2 == 0 || num == 1) {
			cout << "NO\n";
		} else {
			raiz = sqrt(num);
			root = sqrt(raiz);
			// verificando se o número possui uma raiz inteira
			if(raiz != (int)raiz || root == (int)root) {
				cout << "NO\n";
			} else {
				for(long long int i = 3; i <= ((int)raiz)/2; i+=2) {
					if(num % i == 0) {
						tprimo = 1;
						cout << "NO\n";
						break;
					} 
				}
				if(tprimo == 0) {
					cout << "YES\n";
				} 
			}
		}
	}

	return 0;
}
