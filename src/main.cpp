#include <iostream>
#include <vector>
#include <sstream>
#include <string> 

int smash(std::vector<int>& pinatas) {
	int pinatas_len = pinatas.size();
	std::vector<std::vector<int>> table(pinatas_len, std::vector<int>(pinatas_len, 0));
	
	for (int interval_len = 2; interval_len <= pinatas_len; interval_len++) {
		for (int left = 0; left <= pinatas_len - interval_len; left++) {
			int right = left + interval_len - 1;

			for (int p = left + 1; p < right; p++) {
				table[left][right] = std::max(
					table[left][right],
					pinatas[left] * pinatas[p] * pinatas[right]
					+ table[left][p] 
					+ table[p][right]
				);
			}
		}
	}
	return table[0][pinatas_len - 1];
}

int main() {
	std::string input;

	while (true) {
		std::cout << "Waiting for pinatas (enter space separated numbers or q to exit) ...\n";
		std::getline(std::cin, input);
		std::istringstream iss(input);

		if (input == "q") break;

		std::vector<int> pinatas;
		pinatas.push_back(1);
		int num;
		while (iss >> num)
			pinatas.push_back(num);
		pinatas.push_back(1);

		if (pinatas.size() <= 2) {
			std::cout << "Invalid input\n" << std::endl;
			continue;
		}

		std::cout << "Max amount of candies: " << smash(pinatas) << std::endl << std::endl;
	}
	
	return 0;
}