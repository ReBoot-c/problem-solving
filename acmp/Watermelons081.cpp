#include <iostream>
#include <vector>
#include <algorithm>

/* https://acmp.ru/index.asp?main=task&id_task=81
Вывести минимальный и максимальный элемент
*/

int main() {
    int size;
    std::cin >> size;

    std::vector<int> watermelons(size);
    for (auto& i: watermelons) {
        std::cin >> i;
    }

    // Решение 1
    int minimal = watermelons[0], maximal = watermelons[0];
    for (auto &element : watermelons) {
        minimal = element < minimal ? element : minimal;
        maximal = element > maximal ? element : maximal;
    }
    std::cout << minimal << " " << maximal << std::endl;

    // Решение 2
    auto minmax = std::minmax_element(watermelons.begin(), watermelons.end());
    std::cout << *minmax.first << " " << *minmax.second << std::endl;

    return 0;
}