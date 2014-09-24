#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double a, b, c, d, e, f;
	while (cin >> a >> b >> c >> d >> e >> f) {
		double det = a * e - b * d;
		cout << fixed << setprecision(3)
			<< (c * e - b * f) / det + 0.0 << " "
			<< (a * f - c * d) / det + 0.0 << endl;
	}
}
