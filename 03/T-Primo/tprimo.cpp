#include <iostream>
#include <cmath>
using namespace std;

const int MAX = 1000000;
long long int primos[MAX] = {};

void gerar_nao_primos() {
	for(long long int i = 3; i < MAX; i+=2) {
		if(primos[i] == 0) {
			for(long long int j = i+i; j < MAX; j+=i) {
				primos[j] = 1;
			}
		}
	}
}

int main() {
	gerar_nao_primos();

	int n, tprimo = 0;
	int rz, rt;
	double raiz, root;
	long long int num;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
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
			rz = (int)raiz;
			
			if(raiz != rz || primos[rz] == 1) {
				cout << "NO\n";
			} else if(primos[rz] == 0){
				cout << "YES\n";
			}
		}
	}

	return 0;
}
