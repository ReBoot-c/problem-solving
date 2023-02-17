#include <iostream>


/*https://acmp.ru/index.asp?main=task&id_task=43
Вывести максимальную длину цепочек из нулей
*/

int main() {
	std::string digits;
    std::cin >> digits;

	// Решение 1
	int countMaxSequence = 0, countZeroes = 0;
	for (auto& i : digits) {
		if (i == '0') {
			countZeroes++;
		} else {
			countMaxSequence = std::max(countMaxSequence, countZeroes);	
            countZeroes = 0;
		}
	}
    countMaxSequence = std::max(countMaxSequence, countZeroes);	

    std::cout << countMaxSequence << std::endl;

	// Решение 2

	// Пока не придумал...
	return 0;
}
