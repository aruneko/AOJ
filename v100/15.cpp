#include <iostream>
using namespace std;

int main() {
	int n, cardNumber;
	bool cards[4][13] = {0};
	char pattern;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> pattern >> cardNumber;
		cardNumber--;
		switch (pattern) {
			case 'S':
				cards[0][cardNumber] = true;
				break;
			case 'H':
				cards[1][cardNumber] = true;
				break;
			case 'C':
				cards[2][cardNumber] = true;
				break;
			case 'D':
				cards[3][cardNumber] = true;
				break;
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			if (!cards[i][j]) {
				switch (i) {
					case 0:
						cout << "S " << j+1 << endl;
						break;
					case 1:
						cout << "H " << j+1 << endl;
						break;
					case 2:
						cout << "C " << j+1 << endl;
						break;
					case 3:
						cout << "D " << j+1 << endl;
						break;
				}
			}
		}
	}
}
