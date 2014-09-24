#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int w, n;
	cin >> w >> n;

	int ans[w];
	for (int i = 0; i < w; i++) {
		ans[i] = i + 1;
	}

	for (int i = 0; i < n; i++) {
		int a, b;
		scanf("%d,%d", &a, &b);
		ans[a-1] ^= ans[b-1];
		ans[b-1] ^= ans[a-1];
		ans[a-1] ^= ans[b-1];
	}

	for (int i = 0; i < w; i++) {
		cout << ans[i] << endl;
	}
}
