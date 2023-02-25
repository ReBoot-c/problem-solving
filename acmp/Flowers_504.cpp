#include <iostream>
#include <vector>

// Задача: https://acmp.ru/index.asp?main=task&id_task=504

int main() {
	int n;
	std::cin >> n;

	std::vector<char> flowers = { 'G', 'C', 'V' };
	std::vector<char> flowersNew(flowers);

	for (int i = 0; i < flowers.size(); i++) {
		flowersNew[(i + n) % flowers.size()] = flowers[i];
	}

	for (const auto i : flowersNew) {
		std::cout << i;
	}
}