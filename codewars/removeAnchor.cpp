// Задача: https://www.codewars.com/kata/51f2b4448cadf20ed0000386/train/cpp
#include <string>

std::string replaceAll(std::string str) {
  // Решение 1:
  return str.substr(0, str.find('#'));

  // Решение 2:
  return str.find('#') != -1 ? str.erase(str.find('#')) : str;
 
  // Решение 3:
  return std::string(str.begin(), std::find(str.begin(), str.end(), '#'));

  // Решение 4:
  std::string strNew;
  for (const auto i : str) {
    if (i == '#') {
        break;
    } else {
        strNew.push_back(i);
    }
  }
  return strNew;

}

