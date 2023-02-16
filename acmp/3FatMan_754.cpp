#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/* Задача: https://acmp.ru/index.asp?main=task&id_task=754
Суть задания - найти максимальный вес среди 3 толстяков, но любой вес не должен быть меньше 94 и не больше 727.
В противном случае нужно вывести Error.
*/
int main() {
    const int AMOUNT_PEOPLES = 3;

    const int WEIGHT_MINIMAL = 94;
    const int WEIGHT_MAXIMAL = 727;

    vector<int> weights;
    for (int i = 0; i < AMOUNT_PEOPLES; i++) {
        int current;
        cin >> current;

        weights.push_back(current);
    }

    int countError = count_if(weights.begin(),
                              weights.end(), 
                              [&](int _i) {
                                    return _i < WEIGHT_MINIMAL || _i > WEIGHT_MAXIMAL; 
                              });

    if (countError > 0) {
        cout << "Error" << endl;
    } else {
        cout << *max_element(weights.begin(), weights.end()) << endl;
    }

    return 0;
}