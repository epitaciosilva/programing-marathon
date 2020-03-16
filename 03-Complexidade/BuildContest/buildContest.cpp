#include <iostream>
using namespace std;

int main() {
	int n, m, cont = 0, nProb = 0;	
	int probs[100001] = {};

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	
	cin >> n >> m;
	for(; m > 0; m--) {
		cin >> nProb;
		if(probs[nProb] == 0) {
			cont++;
		}
		probs[nProb]++;
		if(cont == n) {
			cont = 0;
			for(int j = 1; j <= n; j++) {
				probs[j]--;
				if(probs[j] > 0) {
					cont++;
				}
			}
			cout << 1;
		} else {
			cout << 0;
		}
	}
	cout << endl;

	return 0;
}
