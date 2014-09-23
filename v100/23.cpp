#include <iostream>
using namespace std;

int main() {
	string in;
	int m, n;
	while (1) {
		cin >> in;
		if (in == "-") break;
		cin >> m;
		for (int i = 0; i < m; i++) {
			cin >> n;
			in = in.substr(n, in.size() - n) + in.substr(0, n);
		}
		cout << in << endl;
	}
}
