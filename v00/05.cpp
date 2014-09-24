#include <iostream>
using namespace std;

long gcd(long a, long b) {
	long c;
	while (a != 0) {
		c = a;
		a = b % a;
		b = c;
	}
	return b;
}

long lcm(long a, long b) {
	return a * b / gcd(a, b);
}

int main() {
	long a, b;
	while (cin >> a >> b) {
		cout << gcd(a, b) << " " << lcm(a, b) << endl;
	}
}
