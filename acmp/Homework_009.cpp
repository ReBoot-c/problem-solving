#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;
/*Задача: https://acmp.ru/index.asp?main=task&id_task=9
Суть: вывести сумму всех положительных чисел ( 0 считается) и 
вывести перемножение всех чисел от минимального (не включая) до максимального (не включительно) элемента.
Пример:

Ввод:
5 (размер массива)
1 4 3 -1 -2 (массив)

Сумма положительных чисел = 8
А перемножение чисел от минимума к максимуму = -3 (минимальный элемент = -2, а максимальный = 4
-1 * 3 (минимальный и максимальный элемент мы не учитываем))*/
void solution_1() { // Решение без STL
    int size, summaryPositive = 0;
    cin >> size;

    vector<int> digits(size);
    for (auto& i : digits) {
        cin >> i;
        if (i >= 0) {
            summaryPositive += i;
        }
    }

    int indexMin = 0, indexMax = 0;

    for (int i = 0; i < digits.size(); i++) {
        indexMin = digits[i] < digits[indexMin] ? i : indexMin;
        indexMax = digits[i] > digits[indexMax] ? i : indexMax;
    }

    int multiplyMinToMax = 1;


    for (int i = min(indexMin, indexMax) + 1; i < max(indexMin, indexMax); i++) {
        multiplyMinToMax *= digits[i];
    }

    cout << summaryPositive << " " << multiplyMinToMax << endl;
}

void solution_2() { // Решение с STL
    
    int size;
    cin >> size;

    vector<int> digits(size);
    for (auto& i : digits) {
        cin >> i;
    }

    vector <int> digitsPositive(size);

    int summaryPositive = accumulate(digits.begin(), digits.end(), 0, [] (int zero, int anotherValue) { return anotherValue > 0 ? anotherValue + zero: zero; }); 

    auto minMaxPair = minmax_element(digits.begin(), digits.end());
    int indexMin = distance(digits.begin(), find(digits.begin(), digits.end(), *minMaxPair.first));
    int indexMax = distance(digits.begin(), find(digits.begin(), digits.end(), *minMaxPair.second));

    int multiplyMinToMax = accumulate(digits.begin() + min(indexMin, indexMax) + 1,
                                      digits.begin() + max(indexMin, indexMax),
                                      1,
                                     [](int _x, int _y) {return _x * _y; });
    

    cout << summaryPositive << " " << multiplyMinToMax << endl;
}
