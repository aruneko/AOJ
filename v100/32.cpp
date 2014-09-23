#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
	stack<char> st;
	queue<char> ans;
	string command;
	char data;

	while (1) {
		cin >> command;
		if (command == "quit") {
			break;
		} else if (command == "push") {
			cin >> data;
			st.push(data);
		} else {
			ans.push(st.top());
			st.pop();
		}
	}

	while (!ans.empty()) {
		cout << ans.front() << endl;
		ans.pop();
	}
}
