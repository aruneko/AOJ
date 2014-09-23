#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	double a, m;
	while (1) {
		a = m = 0;
		cin >> n;
		if (n == 0) break;
		int s[n];
		for (int i = 0; i < n; i++) {
			cin >> s[i];
			m += s[i];
		}
		m /= n;
		for (int i = 0; i < n; i++) {
			a += (s[i] - m) * (s[i] - m);
		}
		a /= n;
		a = sqrt(a);
		cout.setf(ios::fixed, ios::floatfield);
		cout << a << endl;
	}
}
