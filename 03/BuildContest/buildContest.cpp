#include <iostream>
#include <cstdio>

const int MAX = 10000;
int levels, nprob = 0, verificar = 0, cont = 0;
int probs[MAX];

bool temSolucao() {
	int aux[levels] = {0};
	cont = 0;
	for(int i = verificar; i < nprob; i++) {
		for(int j = 0; j < levels; j++) {
			if(aux[j] != probs[i]) {
				aux[j] = probs[i];
				cont++;
				break;
			}
		}
	}
	verificar = nprob;
	return true;
}


int main() {
	int n;

	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	std::cin >> levels >> n;
	
	for(; n > 0; n--) {
		std::cin >> probs[nprob++];	
		if(nprob-levels >= verificar) {
			if(temSolucao()) {
				std::cout << 1;
			} else {
				std::cout << 0;
			}
		} else {
			std::cout << 0;
		}
	}
	std::cout << std::endl;
	
	return 0;
}
