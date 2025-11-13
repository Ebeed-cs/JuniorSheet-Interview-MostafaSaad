#include <iostream>

int main() {

	int n, input, sum = 0, count = 0;
	std::cin >> n;
	int len = n * 3;
	for (int i = 0; i < len; ++i) {
		std::cin >> input;
		sum += input;
		if (i % 3 == 2) {
			if (sum >= 2) count++;
			sum = 0;
		}
	}
	std::cout << count;
	return 0;
}
