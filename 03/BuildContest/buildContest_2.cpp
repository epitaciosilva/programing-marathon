#include <iostream>
#include <cstdio>

using namespace std;

const int MAX = 100000;
int levels, nprob = 0, start = 0, contLevels = 0, nIdxVal = 0, t, a;
int probs[MAX], aux[MAX] = {-1}, indexValidos[MAX];

bool temSolucao() {
	for(int i = start; i < nIdxVal; i++) {		
		t = indexValidos[i];
		if(aux[probs[t]-1] != probs[t]) {
			aux[probs[t]-1] = probs[t];
			contLevels++;
		}
	}
	cout << contLevels << endl;
	if(contLevels != levels) {
		start = nIdxVal;
		return false;
	}
	return true;
}

void marcarSolucao() {
	a = nIdxVal;
	nIdxVal = 0;
	for(int i = 0; i < a; i++) {
		t = indexValidos[i];
		if(aux[probs[t]-1] == -1) {
			indexValidos[nIdxVal++] = t;
		}
		aux[probs[t]-1] = -1;
	}

	contLevels = 0;
	start = 0;
}

int main() {
	int n;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> levels >> n;
	for(; n > 0; n--) {
		cin >> probs[nprob++];	
		indexValidos[nIdxVal++] = nprob-1;
		if(nIdxVal >= levels) {
			if(temSolucao()) {
				if(n > 1) {
					marcarSolucao();
				}
				//cout << 1;
			} else {
				//cout << 0;
			}
		} else {
			//cout << 0;
		}
	}
	cout << endl;
	
	return 0;
}
