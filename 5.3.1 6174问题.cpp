/**
** 5.3.1 6174Œ Ã‚ 
**/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	cout << n;
	int flag = 0;
	int y = n;
	while(1){
		int s[4] = {0};
		s[0] = y % 10;
		s[1] = y % 100 / 10;
		s[2] = y / 100 % 10;
		s[3] = y / 1000;
		sort(s, s+4);
		int a = s[3] * 1000 + s[2] * 100 + s[1] * 10 + s[0];
		int b = s[0] * 1000 + s[1] * 100 + s[2] * 10 + s[3];
		if(a - b == y) flag = 1;
		y = a - b;
		cout << "->" << y;
		if(flag) break;
	}
	cout << endl;
	return 0;
}