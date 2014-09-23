#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n = 10;
	int h[n];
	for (int i = 0; i < n; i++) {
		cin >> h[i];
	}
	sort(h, h + n);
	for (int i = 9; i > 6; i--) {
		cout << h[i] << endl;
	}
}
