#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
	int n;
	cin >> n;

	stack<char> st[n];
	queue<char> ans;
	string command;
	char data;
	int p, p1, p2;

	while (1) {
		cin >> command;
		if (command == "quit") {
			break;
		} else if (command == "push") {
			cin >> p >> data;
			st[p-1].push(data);
		} else if (command == "pop") {
			cin >> p;
			ans.push(st[p-1].top());
			st[p-1].pop();
		} else {
			cin >> p1 >> p2;
			st[p2-1].push(st[p1-1].top());
			st[p1-1].pop();
		}
	}

	while (!ans.empty()) {
		cout << ans.front() << endl;
		ans.pop();
	}
}
