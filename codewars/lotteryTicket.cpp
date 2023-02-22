#include <string>
#include <vector>

// Задача: https://www.codewars.com/kata/57f625992f4d53c24200070e/train/cpp

std::string bingo(std::vector<std::pair<std::string, int>> ticket, int win)
{
  int countWin = 0;
  for (auto pair : ticket) {
    for (auto string : pair.first) {
      if (string == pair.second) {
        countWin++;
        break;
      }
    }
  }
  
  return countWin >= win ? "Winner!" : "Loser!";
}

// Лучший способ:
/*
 return std::count_if(ticket.begin(), ticket.end(), [](const auto& i){
        return std::any_of(i.first.begin(), i.first.end(), [&](const char& j) { return j == i.second; });
    }) >= win ? "Winner!" : "Loser!" ;
*/