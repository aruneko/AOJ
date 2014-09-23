#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int a[n-1];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int min;
	for (int i = 0; i < n - 1; i++) {
		min = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[min]) {
				min = j;
			}
		}
		int tmp;
		tmp = a[i];
		a[i] = a[min];
		a[min] = tmp;
	}

	for (int i = 0; i < n-1; i++) {
		cout << a[i] << " ";
	}
	cout << a[n-1] << endl;
}
