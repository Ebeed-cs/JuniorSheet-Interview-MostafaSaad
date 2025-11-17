#include <iostream>
#include <cctype>

int main() {
	std::string input;
	std::cin >> input;
	input[0] = toupper(input[0]);
	std::cout << input;
	return 0;
}
