#include <iostream>

/* Задача: https://acmp.ru/index.asp?main=task&id_task=940
Удалить букву (ее номер вводит пользователь) из строки (ее вводит пользователь)
Пример:

Ввод:
2
abcde

Вывод:
acde
*/

int main() {
	std::string word;
	int number;
	std::cin >> number >> word;

	// Решение 1
	std::string word_new;
	for (int i = 0; i < word.size(); i++) {
		if (i != number - 1) {
			word_new.push_back(word[i]);
		}
	}
	std::cout << word_new << std::endl;

	// Решение 2
	if (number - 1 < word.length()) {
		word.erase(word.begin() + number - 1, word.begin() + number);
	}
	std::cout << word << std::endl;

	return 0;
	}