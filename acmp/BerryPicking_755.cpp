#include <iostream>
#include <string>

using namespace std;

/* Задача: https://acmp.ru/index.asp?main=task&id_task=755
Вводится 3 числа - сколько собрал 1 человек, сколько собрал 2 человек и сколько съели
Вывод: сколько ягод отсалось, если данные не верны (меньше 0), то выводим Impossible
*/

int main() {
    int berriesMisha, berriesMasha, eating;
    cin >> berriesMisha >> berriesMasha >> eating;

    int summary = berriesMisha + berriesMasha - eating;

    cout << (summary >= 0 ? to_string(summary) : "Impossible") << endl;
    return 0;
}