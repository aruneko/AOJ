#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	string tCard, hCard;
	int tPoint, hPoint;
	tPoint = hPoint = 0;

	for (int i = 0; i < n; i++) {
		cin >> tCard >> hCard;
		if (tCard > hCard) {
			tPoint += 3;
		} else if (tCard < hCard) {
			hPoint += 3;
		} else {
			tPoint++;
			hPoint++;
		}
	}

	cout << tPoint << " " << hPoint << endl;
}
