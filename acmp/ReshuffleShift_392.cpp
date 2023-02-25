#include <iostream>
#include <vector>

// Задача: https://acmp.ru/index.asp?main=task&id_task=392

int main() {
	int size;
	int minimalIndex = 0;
	std::cin >> size;

	std::vector<int> digits(size);

    for (int i = 0; i < size; i++)
    {
        std::cin >> digits[i];
        minimalIndex = digits[i] < digits[minimalIndex] ? i : minimalIndex;
    }

	for (int i = 0; i < size; i++) {
		int indexOffset = (minimalIndex + i) % size;
		std::cout << digits[indexOffset] << ' ';
	}
}
