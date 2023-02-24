#include <iostream>
#include <vector>

// Задача: https://acmp.ru/index.asp?main=task&id_task=392

int main() {
	int size;
	std::cin >> size;

	std::vector<int> digits(size);
	std::vector<int> digitsOffset(size);

	for (auto &i : digits) {
		std::cin >> i;
	}

	// FIXME: НЕ РАБОТАЕТ!!!!!
	for (int i = 0; i < size; i++) {
		int indexOffset = abs(i - size);
		indexOffset = indexOffset < size ? indexOffset : indexOffset - 1 ;

		digitsOffset[indexOffset] = digits[i];
		std::cout << indexOffset << " " << i << std::endl;
	}

	for (const auto i : digitsOffset) {
		std::cout << i << " ";
	}
}