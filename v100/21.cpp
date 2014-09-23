#include <iostream>
using namespace std;

int main() {
	int n;
	string out = "";
	string str;
	cin >> n >> str;
	out = str;
	for (int i = 0; i < n - 1; i++) {
		cin >> str;
		out = (out >= str) ? str : out;
	}
	cout << out << endl;
}
