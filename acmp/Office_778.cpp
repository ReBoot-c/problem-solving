#include <iostream>
#include <vector>
#include <numeric>

/*Задача: https://acmp.ru/index.asp?main=task&id_task=778
Нужно узнать сколько сотрудников работает в офисе (поделить на рабочие дни, т.е. 31-4 = 27)*/

int main() {
    const int SIZE = 31;
    std::vector<int> days(SIZE);

    for (auto& i : days) {
        std::cin >> i;
    }

    int daysAll = std::accumulate(days.begin(), days.end(), 0);
    int daysWork = 27;
    
    std::cout << daysAll / daysWork << std::endl;

    return 0;
}