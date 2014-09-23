#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

int main() {
	std::string w, input;
	int ans = 0;
	std::cin >> w;
	std::transform(w.begin(), w.end(), w.begin(), ::toupper);
	while (1) {
		std::cin >> input;
		if (input == "END_OF_TEXT") break;
		std::transform(input.begin(), input.end(), input.begin(), ::toupper);
		if (input == w) ans++;
	}
	std::cout << ans << std::endl;
}
