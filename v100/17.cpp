#include <iostream>
using namespace std;

int main() {
	int n, m;
	int ans = 0;
	while (1) {
		cin >> n >> m;
		if (n == 0 && m == 0) break;
		ans = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j < i; j++) {
				for (int k = 1; k < j; k++) {
					if (i + j + k == m && i != j && j != k && k != i) {
						ans++;
					}
				}
			}
		}
		cout << ans << endl;
	}
}
