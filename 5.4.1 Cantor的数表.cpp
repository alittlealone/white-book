/**
** 5.4.1 CantorµÄÊý±í
**/

#include <iostream> 
using namespace std;

int main() {
	int n;
	while(cin >> n) {
		int h, x, y;
		for(int i = 1; ; i++) {
			if(i * (i + 1) / 2 >= n) {
				h = i;
				break;
			}
		}
		if(h % 2 != 0) {
			y = n - (h - 1) * h / 2;
			x = h + 1 - y;
		}else {
			x = n - (h - 1) * h / 2;
			y = h + 1 - x;
		}
		cout << x << "/" << y << endl;
	}
	return 0;
} 