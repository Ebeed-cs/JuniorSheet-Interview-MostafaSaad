#include <iostream>

int main() {
	int n, h, input, sum = 0;
	std::cin >> n >> h;
	for (int i = 0; i < n; ++i) {
		std::cin >> input;
		sum += (input > h) ? 2 : 1;
	}
	std::cout << sum;
	return 0;
}
