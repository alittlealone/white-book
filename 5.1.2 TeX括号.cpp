/**
** 5.1.2 TeXÀ¨ºÅ 
**/

#include <iostream>
using namespace std;

int main() {
	int q = 1;
	char c;
	while((c = getchar()) != EOF) {
		if(c == '"') {
			if(q) {
				cout << "``";
			}else {
				cout << c;
			}
			q = !q;
		}else {
			cout << c;
		}
	}
	return 0;
}