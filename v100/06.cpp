#include <iostream>
using namespace std;

int main() {
	int x = 1;
	for (int i = 1; ; i++) {
		cin >> x;
		if (x == 0) break;
		cout << "Case " << i << ":" << " " << x << endl;
	}
}
