#include <iostream>
using namespace std;

int main() {
	string str;
	getline(cin, str);
	for (int i = 0; i < str.size(); i++) {
		if ('A' <= str[i] && str[i] <= 'Z') {
			str[i] += ('a' - 'A');
		} else if ('a' <= str[i] && str[i] <= 'z') {
			str[i] -= ('a' - 'A');
		}
	}

	cout << str << endl;
}
