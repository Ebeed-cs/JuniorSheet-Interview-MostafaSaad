#include <iostream>

int main() {
	int a, b, count;
	count = 0;
	std::cin >> a >> b;
	while (a <= b) {
		count++;
		a *= 3;
		b *= 2;
	}
	std::cout << count;
	return 0;
}
