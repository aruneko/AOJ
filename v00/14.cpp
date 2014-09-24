#include <iostream>
using namespace std;

int main() {
	int d;
	while (cin >> d) {
		int ans = 0;
		for (int i = 600 - d; i > 0; i -= d) {
			ans += d * i * i;
		}
		cout << ans << endl;
	}
}
