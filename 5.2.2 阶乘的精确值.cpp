/** 
** 5.2.2 �׳˵ľ�ȷֵ
**/

#include <iostream>
#include <string>
using namespace std;

const int maxn = 3000;
int f[maxn];
int main() {
	int i, j, n;
	cin >> n;
	memset(f, 0, sizeof(f));
	f[0] = 1;
	for(i = 2; i <= n; i++) {
		//����i 
		int c = 0;
		for(j = 0; j < maxn; j++) {
			int s = f[j] * i + c;
			f[j] = s % 10;
			c = s / 10;
		}
	}
	//����ǰ��0 
	for(j = maxn - 1; j >= 0; j--) {
		if(f[j]) break;
	}
	for(i = j; i >= 0; i--) {
		cout << f[i];
	}
	cout << endl;
	return 0;
} 