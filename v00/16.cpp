#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	int l, r;
	double x, y, rad;

	while (1) {
		scanf("%d,%d", &l, &r);
		if (l == 0 && r == 0) {
			break;
		}

		x += l * sin(rad);
		y += l * cos(rad);
		rad += (r * M_PI / 180);
	}

	cout << (int)x << '\n' << (int)y << endl;
}
