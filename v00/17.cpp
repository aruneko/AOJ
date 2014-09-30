#include <iostream>
using namespace std;

int main() {
	string caesar;
	while (1) {
		getline(cin, caesar);
		if (caesar == "") {
			break;
		}

		while (1) {
			if (caesar.find("that", 0) != string::npos) {
				break;
			} else if (caesar.find("this", 0) != string::npos) {
				break;
			} else if (caesar.find("the", 0) != string::npos) {
				break;
			}
			for (int i = 0; i < caesar.size(); i++) {
				if (caesar[i] != ' ' && caesar[i] != '.') {
					if (caesar[i] == 'z') {
						caesar[i] = 'a';
					} else {
						caesar[i]++;
					}
				}
			}
		}
		cout << caesar << endl;
	}
}
