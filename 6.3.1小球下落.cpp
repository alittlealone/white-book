/**
** 6.3.1 Ğ¡ÇòÏÂÂä
**/

#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main() {
	const int MAXD = 20;
	int s[pow(2, MAXD) - 1];
	int D, I;
	while(cin >> D >> I) {
		memset(s, 0, sizeof(s));
		int k, n = pow(2, D) - 1;
		for(int i = 0; i < I; i++) {
			k = 1;
			for(; ; ) {
				s[k] = !s[k];
				k = s[k] ? k * 2: k * 2 + 1;
				if(k > n) break;
			}
		}
		cout << k / 2 << endl;
	}
	return 0;
} 