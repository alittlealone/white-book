/**
** 5.4.2 ���Ӻͽ׳�
**/

#include <iostream>
#include <math.h>
using namespace std;

//�����ж� 
bool is_prime(int n) {
	for(int i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) return 0;
	}
	return 1;
}

//������
int prime[100];

int main() {
	//n�͸���������ָ��
	int n, p[100];
	int count = 0;
	
	//����������
	for(int i = 2; i <= 100; i++) {
		if(is_prime(i)) prime[count++] = i;
	} 
	
	while(cin >> n && n) {
		cout << n << "!=";
		memset(p, 0, sizeof(p));
		int maxp = 0;
		for(int i = 1; i <= n; i++) {
			//��i���Ƶ�����m�У�����Ҫ��������ʱֱ���޸�
			int m = i;
			for(int j = 0; j < count; j++) {
				while(m % prime[j] == 0) {
					//��������prime[j],���ۼ�p[j] 
					m /= prime[j];
					p[j]++;
					//��������������±� 
					if(j > maxp) maxp = j;
				}
			} 
		}
		//ֻѭ������±�
		for(int i = 0; i <= maxp; i++) {
			cout << p[i] << " ";
		} 
		cout << endl;
	}
	return 0;
} 