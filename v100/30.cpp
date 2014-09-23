#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int s[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	int q;
	cin >> q;

	int t[q];
	for (int i = 0; i < q; i++) {
		cin >> t[i];
	}

	int ans = 0;
	for (int i = 0; i < q; i++) {
		for (int j = 0; j < n; j++) {
			if (t[i] == s[j]) {
				ans++;
				break;
			}
		}
	}

	cout << ans << endl;
}
