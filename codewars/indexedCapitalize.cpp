// Задача: https://www.codewars.com/kata/59cfc09a86a6fdf6df0000f1/train/cpp
#include <string>
#include <vector>
#include <algorithm>

std::string capitalize(std::string s, std::vector<int> idxs)
{
  // Решение 1:
  for (const auto i : idxs) {
    s[i] = std::toupper(i);
  }

  // Решение 2 (C++17):
  std::for_each(idxs.begin(), idxs.end(), [&](auto current){s[i] = std::toupper(i)});

  return s;
}