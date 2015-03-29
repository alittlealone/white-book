/**
** 5.1.1 WERTYU
**/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s, s0;
	s0 = "`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";
	getline(cin, s);
	for(int i = 0; i < s.length(); i++) {
		if(s[i] == ' ') cout << ' ';
		else cout << s0[s0.find(s[i]) - 1];
	}
	cout << endl;
	return 0;
}