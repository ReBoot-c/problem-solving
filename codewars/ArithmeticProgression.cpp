// Задача: https://www.codewars.com/kata/55caf1fd8063ddfa8e000018/train/cpp
#include <string>

std::string arithmeticSequenceElements(int a, int d, int n)
{
  std::string result;
  for (int i = 0;i < n;i++) {
    result += ", " + std::to_string(a);
    a += d;
  }
  
  return std::string(result.begin() + 2, result.end());
}