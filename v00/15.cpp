#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string a, b;
		cin >> a >> b;
		
		string ans;
		int tmp = 0;

		for (int j = 1; ; j++) {
			int x = 0;
			if (a.size() < j) {
				if (b.size() < j) {
					break;
				}
				x = b[b.size()-j] - '0' + tmp;
			} else if (b.size() < j) {
				if (a.size() < j) {
					break;
				}
				x = a[a.size()-j] - '0' + tmp;
			} else {
				x = a[a.size()-j] - '0' + b[b.size()-j] - '0' + tmp;
			}
			ans = (char)((x % 10) + '0') + ans;
			tmp = x / 10;
		}
		if (tmp > 0) {
			ans = (char)(tmp + '0') + ans;
		}
		if (ans.size() > 80) {
			cout << "overflow" << endl;
		} else {
			cout << ans << endl;
		}
	}
}
