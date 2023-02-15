#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

/* Задача: https://acmp.ru/index.asp?main=task&id_task=61
Если кратко, то вводится четыре строки с двумя числами. 1 число - первая команда, 2 число - вторая команда.
Нужно вывести DRAW, если ничья, 1 если победила первая команда и 2 если победила вторая команда.

Пример ввода:
10 0
10 0
10 0
5  5

Вывод:
1
*/

const int AMOUNT_ROUNDS = 4;

void basketball() { // решение с векторами
	vector<pair<int, int>> teams(AMOUNT_ROUNDS);

	for (auto &team : teams) {
		cin >> team.first >> team.second;
	}

	int summaryFirst = accumulate(teams.begin(), teams.end(), 0,
		[](auto previos, auto& entry) {
			return previos + entry.first;
		});

	int summarySecond = accumulate(teams.begin(), teams.end(), 0,
		[](auto previos, auto& entry) {
			return previos + entry.second;
		});

	if (summaryFirst == summarySecond) {
		cout << "DRAW" << endl;
	}
	else {
		cout << (summaryFirst > summarySecond ? 1 : 2) << endl;
	}
}

void basketball2() { // Более простое решение без использования векторов
	int summaryFirst, summarySecond;

	for (int i = 0; i < AMOUNT_ROUNDS; i++) {
		int first, second;
		cin >> first >> second;

		summaryFirst += first;
		summarySecond += second;
	}

	if (summaryFirst == summarySecond) {
		cout << "DRAW" << endl;
	}
	else {
		cout << (summaryFirst > summarySecond ? 1 : 2) << endl;
	}
}
