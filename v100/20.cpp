#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	char ch;
	int counter[26] = {};

	while ( scanf("%c", &ch) != EOF ) {
		if ( isalpha(ch) ) {
			if ( isupper(ch) ) {
				ch = tolower(ch);
			}
			counter[ch - 'a']++;
		}
	}

	for (int i = 0; i < 26; i++) {
		cout << (char)(i + 'a') << " : " << counter[i] << endl;
	}
}
