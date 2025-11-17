#include <iostream>

int main() {
	int freq_Arr[123] = { 0 };
	int count = 0;
	std::string input;
	std::cin >> input;
	int len = input.length();
	for (int i = 0; i < len; ++i) {
		if (freq_Arr[input[i]]) continue;
		count++;
		freq_Arr[input[i]]++;
	}
	if (count % 2 == 0) std::cout << "CHAT WITH HER!";
	else std::cout << "IGNORE HIM!";
	return 0;
}
