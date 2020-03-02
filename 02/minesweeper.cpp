#include <iostream>
#include <string>

int main() {
	int n,m;
	int cont = 1;

	while(true) {
		std::cin >> m >> n;
			
		if(m == 0 && n == 0) {
			break;
		}

		int out[m][n] = {0}; 
		std::string line;

		for(int i = 1; i <= m; i++) {
			std::cin >> line;
			
			for(int j = 1; j <= n; j++) {
            	if(line[j-1] == '*') {
					out[i][j] == -1;

					for(int k = i-1; k <=i+1; k++) {
						for(int l = j-1; j<= j+1; l++) {
							if(out[k][l] != -1) out[k][l]++;
						}
					}
				}	         	
			}
		}
		
		std::cout << "Field #" << cont << ":" << std::endl;
		for(int i = 0; i < m; i++) {
			for(int j  = 0; j < n; j++) {
				if(out[i][j] == -1) {
					std::cout << "*";
				} else {
					std::cout << out[i][j];
				}
			}
			std::cout << "\n\n";
		}

		cont++;
	}

	return 0;
}
