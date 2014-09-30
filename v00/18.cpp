#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
	int num[5];
	for (int i = 0; i < 5; i++) {
		cin >> num[i];
	}
	sort(num, num + 5, greater<int>());
	for (int i = 0; i < 4; i++) {
		cout << num[i] << " ";
	}
	cout << num[4] << endl;
}
