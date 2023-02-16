#include <iostream>

/* https://acmp.ru/index.asp?main=task&id_task=839
Вывести YES если в строке только 1, NO в противном случае
*/

int solution_1(std::string digits) {
    int countIfKnow = 0;
    for (auto& i : digits) {
        if (i == '1') {
            countIfKnow++;
        }
    }
    return countIfKnow;
}

int solution_2(std::string digits) {
    return std::count(digits.begin(), digits.end(), '1');
}

int main() {
    std::string digits;
    std::cin >> digits;

    std::cout << (solution_1(digits) == digits.length() ? "YES" : "NO") << std::endl;
    std::cout << (solution_2(digits) == digits.length() ? "YES" : "NO") << std::endl;

    return 0;
}