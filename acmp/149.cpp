#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*Задача: https://acmp.ru/index.asp?main=task&id_task=149
Ввод: первое число - количество чисел, остальные - просто числа
Вывод: вывести перевернутую последовательность

Пример:
Ввод:
5
1 2 3 4 5
Вывод:
5 4 3 2 1
*/

int main() {
    int size;
    cin >> size;

    vector<int> digits(size);

    for (auto &i : digits) {
        cin >> i;
    }

    reverse(digits.begin(), digits.end());

    for (auto i : digits) {
        cout << i << " ";
    }
    
    return 0;
}