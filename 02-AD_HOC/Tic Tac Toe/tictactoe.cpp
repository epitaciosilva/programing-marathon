#include <iostream>
#include <string>

int m[3][3] = {0};

void check(int X, int O) {
	int cont = 0, aux[] = {0,0};

	if(m[0][0] != 0 && m[0][0] == m[0][1] && m[0][1] == m[0][2]) { // 1- 
		aux[cont] = m[0][0];
		cont++;
	} 
	if(m[1][0] != 0 && m[1][0] == m[1][1] && m[1][1] == m[1][2]) { // 2-
		aux[cont] = m[1][0];
		cont++;
	} 
	if(cont < 2 && m[2][0] != 0 && m[2][0] == m[2][1] && m[2][1] == m[2][2]) {// 3-
		aux[cont] = m[2][0];
		cont++;
	} 
	if(cont < 2 && m[0][0] != 0 && m[0][0] == m[1][0] && m[1][0] == m[2][0]) { // 1| 
		aux[cont] = m[0][0];
		cont++;
	} 
	if(cont < 2 && m[0][1] != 0 && m[0][1] == m[1][1] && m[1][1] == m[2][1]) { // 2|
		aux[cont] = m[0][1];
		cont++;
	} 
	if(cont < 2 && m[0][2] != 0 && m[0][2] == m[1][2] && m[1][2] == m[2][2]) { // 3|
		aux[cont] = m[0][2];
		cont++;
	} 
	if(cont < 2 && m[0][0] != 0 && m[0][0] == m[1][1] && m[1][1] == m[2][2]) { // 1/ 
		aux[cont] = m[0][0];
		cont++;
	} 
	if(cont < 2 && m[2][0] != 0 && m[2][0] == m[1][1] && m[1][1] == m[0][2]) { // 2/ 
		aux[cont] = m[2][0];
		cont++;
	}

	if(cont >=2 && (aux[0] != aux[1] || aux[0] == 1)) {
		std::cout << "no\n";
	} else if(cont >=2 && aux[0] == -1) {
		std::cout << "yes\n";
	} else if(cont == 1 && aux[0] == 1 && O == X) {
		std::cout << "yes\n";
	} else if(cont == 1 && aux[0] == -1 && X > O) {
		std::cout << "yes\n";
	} else if(cont == 0 && (O == X || X > O)) {
		std::cout << "yes\n";
	}else {
		std::cout << "no\n";
	}
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
		if(O > X || X-O >=2) {
			std::cout << "no\n";
		} else {
			check(X,O);
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
