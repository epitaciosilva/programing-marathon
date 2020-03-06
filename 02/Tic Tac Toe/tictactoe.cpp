#include <iostream>
#include <string>
#include <algorithm>

int m[3][3] = {0};

int check() {
	int cont = 0, aux = 3;

	if(m[0][0] != 0 && m[0][0] == m[0][1] && m[0][1] == m[0][2]) { // 1- 
		cont++;
		aux = m[0][0];
	} 
	if(m[1][0] != 0 && m[1][0] == m[1][1] && m[1][1] == m[1][2]) { // 2-
		cont++;
		aux = m[1][0];
	} 
	if(m[2][0] != 0 && m[2][0] == m[2][1] && m[2][1] == m[2][2]) {// 3-
		cont++;
		aux = m[2][0];
	} 
	if(m[0][0] != 0 && m[0][0] == m[1][0] && m[1][0] == m[2][0]) { // 1| 
		cont++;
		aux = m[0][0];
	} 
	if(m[0][1] != 0 && m[0][1] == m[1][1] && m[1][1] == m[2][1]) { // 2|
		cont++;
		aux = m[0][1];
	} 
	if(m[0][2] != 0 && m[0][2] == m[1][2] && m[1][2] == m[2][2]) { // 3|
		cont++;
		aux = m[0][2];
	} 
	if(m[0][0] != 0 && m[0][0] == m[1][1] && m[1][1] == m[2][2]) { // 1/ 
		cont++;
		aux = m[0][0];
	} 
	if(m[2][0] != 0 && m[2][0] == m[1][1] && m[1][1] == m[0][2]) { // 2/ 
		cont++;
		aux = m[2][0];
	}

	if(cont >=2) {
		return 2;
	} 
	return aux;
}

int main() {
	int n, X = 0, O = 0, aux;

	std::string in[3];
	std::cin >> n;
	
	for(int i =0; i < n; i++) {
		// lendo
		std::cin >> in[0] >> in[1] >> in[2];
		
		for(int j = 0; j < 3; j++) {
			for(int k = 0; k < 3; k++) {
				// contabilzando X e O
				if(in[j][k] == 'X') {
					m[j][k] = -1;
					X++;
				} else if(in[j][k] == 'O') { 
					m[j][k] = 1;
					O++;
				}
			}	
		}
		if(O > X || X-O >=2 || (X == 0 && O == 0)) {
			std::cout << "no\n";
		} else {
			aux = check();
			if(aux == 0) {
				continue;
			} else if(aux ==2 || (aux == 1 && O != X) || (aux == -1 && X == O)) {
				std::cout << "no\n"; 
			} else {
				std::cout << "yes\n";
			}
		}

		for(int i =0; i < 3; i++) {
			for(int j =0; j < 3; j++) {
				m[i][j] = 0;
			}
		}
	
		X = 0;
		O = 0;
	}
	return 0;
}
