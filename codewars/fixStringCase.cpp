#include <string>
#include <algorithm>


std::string solve(const std::string& str) {
	// Решение 1:
	int countUpper = 0;
    int countLower = 0;

	for (const auto i : str) {
		if (std::isupper(i)) {
			countUpper++;
		}
		else {
			countLower++;
		}
	}


	// Решение 2:
	int countUpper = std::count_if(str.begin(), str.end(), [](char current) { return std::isupper(current); });
	int countLower = str.size() - countUpper;

    // Общая обработка
	std::string strNew = str;
	std::transform(str.begin(), str.end(), strNew.begin(), (countUpper <= countLower ? ::tolower : ::toupper));
	return strNew;

}