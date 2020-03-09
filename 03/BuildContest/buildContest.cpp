#include <iostream>
#include <cstdio>

const int MAX = 100000;
int levels, nprob = 0, start = 0, marcador = 100000, contLevels = 0, cont = 0;
int probs[MAX], aux[MAX] = {0}, validos[MAX] = {0};

bool temSolucao() {
	contLevels = 0;
	
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
	
	// marcando probs e limpando aux
	for(int i = start; i < nprob; i++) {
		if(contLevels == levels && aux[probs[i]-1] != 0) {
			aux[probs[i]-1] = 0; 
			probs[i] = 0;
		} else {
			aux[probs[i]-1] = 0;
		}
	}

	// verificando se tem solução
	if(contLevels == levels) {	
		start = marcador != 100000 ? marcador : nprob;
		return true;
	}
	return false;
}


int main() {
	int n;

	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	std::cin >> levels >> n;
	for(; n > 0; n--) {
		std::cin >> probs[nprob++];	
		if(nprob-levels >= start) {
			if(temSolucao()) {
				std::cout << 1;
			} else {
				std::cout << 0;
			}
		} else {
			validos[cont++] = nprob-1;
			std::cout << 0;
		}
	}
	std::cout << std::endl;
	
	return 0;
}
