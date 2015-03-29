/**
** 6.1.2 铁轨
**/

#include <iostream>
#include <stack>
using namespace std;
const int MAXN = 1000 + 10;

int main() {
	//stack[1]是栈底元素，这样栈空当且仅当top=0 
	int n, target[MAXN];
	while(cin >> n && n) {
		stack<int> s;
		//A为从1开始的车厢号，B为出栈的位置 
		int A = 1, B = 1;
		for(int i = 1; i <= n; i++) {
			cin >> target[i];
		}
		int flag = 1;
		while(B <= n) { 
			if(A == target[B]) {
				A++;
				B++;
			} else if(!s.empty() && s.top() == target[B]) {
				s.pop();
				B++;
			} else if(A <= n) {
				s.push(A++);
			} else {
				flag = 0;
				break;
			}
		}
		if(flag) {
			cout << "Yes" << endl;
		}else {
			cout << "No" << endl;
		}
	} 
	return 0;
} 