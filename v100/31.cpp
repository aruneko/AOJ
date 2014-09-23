#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;

	int s[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	sort(s, s + n);

	int q;
	cin >> q;

	int t;
	int ans = 0;
	for (int i = 0; i < q; i++) {
		cin >> t;
		if ( binary_search(s, s + n, t) ) ans++;
	}

	cout << ans << endl;
}
