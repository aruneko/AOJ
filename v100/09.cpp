#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	double r;
	cin >> r;
	cout << fixed << setprecision(5)
		<< r * r * M_PI << " " << 2 * M_PI * r << endl;
}
