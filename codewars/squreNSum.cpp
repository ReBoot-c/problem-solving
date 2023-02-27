#include <vector>
#include <numeric>
#include <algorithm>

// Задача: https://www.codewars.com/kata/515e271a311df0350d00000f/train/cpp

int square_sum(const std::vector<int>& numbers)
{
    // 1 вариант:
    int summary = 0;
    for (const auto i : numbers) {
      summary += i*i;
    }
    return summary;

    // 2 вариант:
    return std::accumulate(numbers.begin(), numbers.end(), 0, [](int previos, int current) {return previos + current*current; });

    // 3 вариант (C++ 17):
    int summary = 0;
    std::for_each(numbers.begin(), numbers.end(), [&summary](int current){summary += current*current;});
    return summary;

    // 5 вариант:
    return std::inner_product(numbers.begin(), numbers.end(), numbers.begin(), 0 );

    // 6 вариант (C++ 17):
    return std::transform_reduce(numbers.begin(), numbers.end(), numbers.begin(), 0);
}