#include <map>
#include <string>

// Задача: https://www.codewars.com/kata/52efefcbcdf57161d4000091/train/cpp 

std::map<char, unsigned> count(const std::string& string) {
    std::map<char, unsigned> tables;
    for (const auto i : string) {
        // Способ 1:
        tables[i] = std::count(string.begin(), string.end(), i);

        // Способ 2:
        // tables[i]++;
    }
    return tables;
}


// Заметка: первый способ менее эффективный (при строке, длинной в 50000 знаков виднеется большая разница)
