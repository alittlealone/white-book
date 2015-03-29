/**
** 5.2.1 小学生算术
**/

#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	while(cin >> a >> b && a && b) {
		c = 0;
		for(int i = 0; i < 9; i++) {
			c = c + (a % 10 + b % 10) / 10;
			a = a / 10;
			b = b / 10;
		}
		cout << c << endl;
	}
	return 0;
} 