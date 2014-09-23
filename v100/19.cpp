#include <iostream>
using namespace std;

int main() {
	string x;
	int ans;
	while (1) {
		cin >> x;
		if (x[0] == '0') break;
		ans = 0;
		for (int i = 0; i < x.size(); i++) {
			ans += (x[i] - '0');
		}
		cout << ans << endl;
	}
}
