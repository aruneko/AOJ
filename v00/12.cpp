#include <iostream>
using namespace std;

int main() {
	double x1, x2, x3, y1, y2, y3, xp, yp;
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
		double z1 = (x1 - x2) * (y2 - yp) - (y1 - y2) * (x2 - xp);
		double z2 = (x2 - x3) * (y3 - yp) - (y2 - y3) * (x3 - xp);
		double z3 = (x3 - x1) * (y1 - yp) - (y3 - y1) * (x1 - xp);
		if (z1 > 0 && z2 > 0 && z3 > 0 || z1 < 0 && z2 < 0 && z3 < 0) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}
