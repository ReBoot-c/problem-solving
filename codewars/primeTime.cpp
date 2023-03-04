// Задача: https://www.codewars.com/kata/521ef596c106a935c0000519/train/cpp
#include <vector>
#include <cmath>

bool isPrime(int digit) {
		if (digit <= 1) {
			return false;
		}

		for (int i = 2; i <= sqrt(digit); i++) {
			if (digit % i == 0) {
				return false;
			}
		}
		return true;
	}

std::vector<unsigned> prime(unsigned n){
  std::vector<unsigned> primes;
  
  if (n <= 1) {
    return {};
  }
  
  for (unsigned i = 2;i <= n;i++) {
    if (isPrime(i)) {
      primes.push_back(i);
    }
  }
  return primes;
}
