#include <iostream>
#include <algorithm>
#include <vector>

/*https://acmp.ru/index.asp?main=task&id_task=43
Вывести максимальную длину цепочек из нулей
*/

int main() {
	std::string digits;
	std::vector<int> counts;

	std::cin >> digits;

	// Решение 1
	int countMaxSequence = 0;
	for (auto& i : digits) {
		if (i == '0') {
			countMaxSequence++;
		} else {
			counts.push_back(countMaxSequence);
			countMaxSequence = 0;	
		}
	}

	if (countMaxSequence > 0) {
		counts.push_back(countMaxSequence);
		countMaxSequence = 0;
	}

	std::cout << (counts.size() > 0 ? *max_element(counts.begin(), counts.end()) : 0) << std::endl;

	// Решение 2

	// Пока не придумал...
	return 0;
}