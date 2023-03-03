// Задача: https://www.codewars.com/kata/52b7ed099cdc285c300001cd/train/cpp

// TODO: Интервалы не дожны дублироваться
#include <vector>
#include <utility>

int sum_intervals(std::vector<std::pair<int, int>> intervals) {
  int summary = 0;
  for(const auto i : intervals) {
    summary += i.second - i.first;
  }
  
  return summary;
}