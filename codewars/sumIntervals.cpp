// Задача: https://www.codewars.com/kata/52b7ed099cdc285c300001cd/train/cpp

// TODO: Интервалы не дожны дублироваться
#include <vector>
#include <utility>
#include <algorithm>
#include <iostream>

int sum_intervals(std::vector<std::pair<int, int>> intervals) {
  std::sort(intervals.begin(), intervals.end());
  for (const auto i : intervals) std::cout << i.first << " " << i.second << ", ";
  return 0;
}
// FIXME: НЕ РАБОТАЕТ!!!
int main() {
  sum_intervals(std::vector<std::pair<int,int>>({{100,1000}, {9, 20}}));
  return 0;
}