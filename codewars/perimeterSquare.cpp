#include <iostream>

// Задача: https://www.codewars.com/kata/559a28007caad2ac4e000083

typedef unsigned long long ull;
class SumFct
{
  public:
  static ull summaryFib(int digits) {
		ull first = 0;
		ull second = 1;
		ull next = 1;
		ull summary = 0;

		for (int i = 0; i < digits; i++) {
			summary += next;
			next = first + second;
			first = second;
			second = next;
		}
		return summary;
	}
  static ull perimeter(int n) {
    std::cout << n << std::endl;
    return summaryFib(n + 1) * 4;
  };
};
