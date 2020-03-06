#include <iostream>
#include <string>

int main() {
	int n,m;
	int cont = 1;
	int out[103][103] = {0};

	while(true) {
		std::cin >> m >> n;
			
		if(m == 0 && n == 0) break;

		std::string line;

		for(int i = 1; i <= m; i++) {
			std::cin >> line;
			
			for(int j = 1; j <= n; j++) {
            			if(line[j-1] == '*') {
					out[i][j] = -1;

					for(int k = i-1; k <= i+1; k++) {
						for(int l = j-1; l<= j+1; l++) {
							if(out[k][l] != -1) out[k][l]++;
						}
					}
				}	         	
			}
		}
		if(cont > 1) std::cout << std::endl;
		std::cout << "Field #" << cont << ":\n";
		for(int i = 1; i <= m+1; i++) {
			for(int j  = 1; j <= n+1; j++) {
				if(i < m+1 && j < n+1)  {
					if(out[i][j] == -1) {
						std::cout << "*";
					} else {
						std::cout << out[i][j];
					}
				}
				out[i][j] = 0;
			}
			if(i <= m) std::cout << std::endl;
		}
		cont++;
	}

	return 0;
}
