#include <iostream>

/*https://acmp.ru/index.asp?main=task&id_task=43
Вывести максимальную длину цепочек из нулей*/

int main() {
    std::string digits;
    std::cin >> digits;

    int countMaxSequence = 0, countZeroes = 0;
    for (auto& i : digits) {
        if (i == '0') {
                countZeroes++;
                countMaxSequence = std::max(countMaxSequence, countZeroes);
        } else {
                countZeroes = 0;
        }
    }
    countMaxSequence = std::max(countMaxSequence, countZeroes);

    std::cout << countMaxSequence << std::endl;

    return 0;

}
