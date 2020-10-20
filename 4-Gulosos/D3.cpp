#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, num, cmin, cmax, cont;
    long long soma, maiorSoma;
    vector<int> min(100000);
    vector<int> max(100000);
    bool sum = false;

    cin >> t;
    while(t--) {
        cin >> n;

        sum = false, soma = 1, cmin = 0, cmax = 0;
        for(int j = 0; j < n; j++ ) {
            cin >> num;
            if(num < 0) {
                min[cmin++] = num;
            } else {
                max[cmax++] = num;
            }
            soma *=num;
        }
        if(n > 5) {
            soma = 1;
            sort(min.begin(), min.begin()+cmin);
            sort(max.begin(), max.begin()+cmax);

            if(cmax == 0) { 
                for(int i = cmin-1; i >= cmin-5; i--) {
                    soma *= min[i];
                }
            } else {
                soma = 1;
                if (cmax >= 5) {
                    for(int j = 5; j > 0; j--) {
                        soma *= max[cmax-j];
                    }
                    sum = true; 
                }
                maiorSoma = soma;

                if(cmin >= 2 && cmax >= 3) {
                    maiorSoma = 1;
                    for(int j = 1; j < 4; j++) {
                        maiorSoma *= max[cmax-j];
                        if(j <= 2) {
                            maiorSoma *= min[j-1];
                        }
                    }
                    if(maiorSoma > soma || !sum) {
                        soma = maiorSoma;
                        sum = true;
                    }
                }
             //   maiorSoma = cmin >=2 ? min[0] * min[1] * max[cmax-1] * max[cmax-2] * max[cmax-3] : soma;

                if(cmin >= 4) {
                    maiorSoma = 1;
                    for(int j = 0; j < 4; j++) {
                        maiorSoma *= min[j];
                        if(j == 1) {
                            maiorSoma *= max[cmax-j];
                        }
                    }
                    //maiorSoma = cmin >=4 ? min[0] * min[1] * min[2] * min[3] * max[cmax-1] : soma;
                    if(maiorSoma > soma || !sum) {
                        soma = maiorSoma;
                    }
                }
            } 
        }
        cout << soma << endl; 
    }
    return 0;
}