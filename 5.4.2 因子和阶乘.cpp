/**
** 5.4.2 因子和阶乘
**/

#include <iostream>
#include <math.h>
using namespace std;

//素数判定 
bool is_prime(int n) {
	for(int i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) return 0;
	}
	return 1;
}

//素数表
int prime[100];

int main() {
	//n和各个素数的指数
	int n, p[100];
	int count = 0;
	
	//构造素数表
	for(int i = 2; i <= 100; i++) {
		if(is_prime(i)) prime[count++] = i;
	} 
	
	while(cin >> n && n) {
		cout << n << "!=";
		memset(p, 0, sizeof(p));
		int maxp = 0;
		for(int i = 1; i <= n; i++) {
			//把i复制到变量m中，而不要在做除法时直接修改
			int m = i;
			for(int j = 0; j < count; j++) {
				while(m % prime[j] == 0) {
					//反复除以prime[j],并累加p[j] 
					m /= prime[j];
					p[j]++;
					//更新最大素因子下标 
					if(j > maxp) maxp = j;
				}
			} 
		}
		//只循环最大下标
		for(int i = 0; i <= maxp; i++) {
			cout << p[i] << " ";
		} 
		cout << endl;
	}
	return 0;
} 