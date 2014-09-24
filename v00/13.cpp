#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
	queue<int> q;
	stack<int> s;
	int n;
	while (cin >> n) {
		if (n == 0) {
			q.push(s.top()); 
			s.pop();
		} else {
			s.push(n);
		}
	}
	while (!q.empty()) {
		cout << q.front() << endl;
		q.pop();
	}
}
