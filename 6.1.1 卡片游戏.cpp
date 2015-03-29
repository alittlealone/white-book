/**
** 6.1.1 ©╗ф╛сно╥
**/

#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n;
	queue<int> q;
	cin >> n;
	for(int i = 0; i < n; i++) {
		q.push(i + 1);
	}
	while(!q.empty()) {
		cout << q.front() << " ";
		q.pop();
		q.push(q.front());
		q.pop();
	}
	return 0;
} 