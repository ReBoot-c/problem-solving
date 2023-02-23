#include <algorithm>
#include <string>
#include <vector>

// Задача: https://www.codewars.com/kata/5254ca2719453dcc0b00027d/train/cpp

std::vector<std::string> permutations(std::string s) {
    std::vector<std::string> vectorPerm{};
    std::sort(s.begin(), s.end());
    do {
        vectorPerm.push_back(s);
    } while(std::next_permutation(s.begin(), s.end()));
  
  return vectorPerm;
}