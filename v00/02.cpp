#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b;
	
	while (cin >> a >> b) {
		//C++11
		cout << to_string(a + b).size() << endl;
	}
}
