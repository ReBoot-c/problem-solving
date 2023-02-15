#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

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

int main() {
    solution_1();
    cout << string(100, '-') << endl;
    solution_2();
    return 0;
}