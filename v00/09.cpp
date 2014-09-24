#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;

	while (cin >> n) {
		n++;
		bool prime[n];
		int ans = 0;
		for (int i = 0; i < n; i++) {
			prime[i] = true;
		}
		for (int i = 2; i < sqrt(n); i++) {
			if (prime[i]) {
				for (int j = 0; i * (j + 2) < n; j++) {
					prime[i * (j + 2)] = false;
				}
			}
		}
		for (int i = 2; i < n; i++) {
			if (prime[i]) {
				ans++;
			}
		}
		cout << ans << endl;
	}
}
