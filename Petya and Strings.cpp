#include <iostream>
#include <cctype>

int main() {
	std::string input1, input2;
	std::cin >> input1 >> input2;
	int len = input2.length();
	int res = 5;
	for (int i = 0; i < len; ++i) {
		char c1 = tolower(input1[i]);
		char c2 = tolower(input2[i]);

		if (c1 == c2) continue;
		else {
			if (c1 > c2) res = 1;
			else	res = -1;
			break;
		}
	}
	if (res == 5) res = 0;
	std::cout << res;
	return 0;
}
