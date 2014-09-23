#include <iostream>
using namespace std;

void swap(int *x, int *y) {
	*x ^= *y ^= *x ^= *y;
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a > b) {
		swap(&a, &b);
	}
	if (b > c) {
		swap(&b, &c);
	}
	if (a > b) {
		swap(&a, &b);
	}
	cout << a << " " << b << " " << c << endl;
}
