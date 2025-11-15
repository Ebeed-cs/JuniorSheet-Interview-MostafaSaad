#include <iostream>
#include <cmath>

int main() {
	int input;
	int len = 0;
	for (; len < 25; ++len) {
		std::cin >> input;
		if (input == 1) break;
	}
	int col = len % 5;
	int row = len / 5;
	std::cout << abs((row - 2)) + abs((col - 2));
	return 0;
}
