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

void basketball() { 
	vector<pair<int, int>> teams;

	for (int i = 0; i < 4; i++) {
		pair<int, int> current;

		cin >> current.first >> current.second;
		teams.push_back(current);
	}

	int summary_first = accumulate(teams.begin(), teams.end(), 0,
		[](auto previos, auto& entry) {
			return previos + entry.first;
		});

	int summary_second = accumulate(teams.begin(), teams.end(), 0,
		[](auto previos, auto& entry) {
			return previos + entry.second;
		});

	if (summary_first == summary_second) {
		cout << "DRAW" << endl;
	}
	else {
		cout << (summary_first > summary_second ? 1 : 2) << endl;
	}
}