#include <iostream>
#include <string>
#include <map>

// Задача: https://www.codewars.com/kata/51b6249c4612257ac0000005/train/cpp

int getConvertDigit1(char romanDigit) { // Решение 1
	int digit = 0;
	switch (romanDigit)
	{
	case 'I':
		digit = 1;
		break;
	case 'V':
		digit = 5;
		break;
	case 'X':
		digit = 10;
		break;
	case 'L':
		digit = 50;
		break;
	case 'C':
		digit = 100;
		break;
	case 'D':
		digit = 500;
		break;
	case 'M':
		digit = 1000;
		break;
	}

	return digit;
}
int getConvertDigit2(char romanDigit) { // Решение 2
	std::map<char, int> table{ {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000} };

	return table[romanDigit];
}

int solution(std::string roman) {
	int previos = 0, summary = 0;

	for (const auto i : roman) { // Общая обработка (Нужно для цифр по типу IV)
		int current = getConvertDigit1(i);
		summary += current > previos ? current - previos * 2 : current;
		previos = current;
	}

	return summary;
}