#include <algorithm>
#include <string>
#include <cctype>

// Задача: https://www.codewars.com/kata/530e15517bc88ac656000716/train/cpp

std::string rot13(std::string msg) {
	const std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
	const int OFFSET = 13;
	
	std::string cipher;

	for (const auto i : msg) {
		int index = alphabet.find(tolower(i));
		char newChar = alphabet[(index + OFFSET) % alphabet.size()];

		if (index != -1) {
			if (islower(i)) {
				cipher += newChar;
			} else {
				cipher += toupper(newChar);
			}
		} else {
			cipher += i;
		}
	}

	return msg;
}

// В топах codewars используется в основном смещения в таблице ASCII. Вот один из примеров:
/*

std::transform(begin(msg), end(msg), begin(msg), [] (char c) -> char
  {
    if (!std::isalpha(c)) return c;

    char offset = std::isupper(c) ? 'A' : 'a';
    return (c - offset + 13) % 26 + offset;
  });

*/