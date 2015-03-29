/**
** ÖÜÆÚ´®
**/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int flag = 1;
	for(int i = 0; i < s.length(); i++) {
		if(s.length() % (i + 1) == 0) {
			for(int j = i; j < s.length(); j++) {
				if(s[j] != s[j % i]) {
					flag = 0;
					break;
				}
			}
			if(flag) {
				cout << i + 1 << endl;
				break;
			}
		}
		if(flag) break;
	}
	return 0;
}