#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a, b, c;
	cin >> a >> b >> c;
	c = M_PI * c / 180;
	cout.setf(ios::fixed, ios::floatfield);
	cout << 0.5 * a * b * sin(c) << " " << endl;
	cout << a + b + sqrt(a * a + b * b - 2 * a * b * cos(c)) << " " << endl;
	cout << b * sin(c) << " " << endl;
}
