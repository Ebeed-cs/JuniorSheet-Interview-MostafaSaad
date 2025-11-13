#include <iostream>

int main() {
	char input;
	int Anton, Danik, n;
	Anton = Danik = 0;
	std::cin >> n;
	for (int i = 0; i < n; --n) {
		std::cin >> input;
		if (input == 'A') Anton++;
		else Danik++;
	}
	std::string result = (Anton > Danik) ? "Anton" : (Anton < Danik) ? "Danik" : "Friendship";
	std::cout << result;
	return 0;
}
