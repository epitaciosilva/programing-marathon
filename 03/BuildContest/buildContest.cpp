#include <iostream>
#include <cstdio>

const int MAX = 100000;
int levels, nprob = 0, start = 0, inicio = 0, marcador = 100000, contLevels = 0, removidos = 0;
int probs[MAX], aux[MAX] = {0};

bool temSolucao() {
	for(int i = start; i < nprob; i++) {		
		// se o número ainda não está dentro de aux, adiciona
		if(probs[i] != 0 && aux[probs[i]-1] != probs[i]) {
			aux[probs[i]-1] = probs[i];
			contLevels++;
		} else if(i <= marcador){
			// menor posição de um número válido no vetor probs
			marcador = i;
		}
	}
	
	if(contLevels != levels) {
		start = nprob;
		return false;
	}
	removidos = 0;
	// marcando probs e limpando aux
	for(int i = inicio; i < nprob; i++) {
		if(aux[probs[i]-1] != 0) {
			aux[probs[i]-1] = 0; 
			probs[i] = 0;
			if(i >= marcador) {
				removidos++;
			}
		} else {
			aux[probs[i]-1] = 0;
		}
	}

	contLevels = 0;
	start = marcador != 100000 ? marcador : nprob;
	inicio = start;
	return true;
}


int main() {
	int n;

	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	std::cin >> levels >> n;
	for(; n > 0; n--) {
		std::cin >> probs[nprob++];	
		if(nprob >= inicio+removidos+levels) {
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
