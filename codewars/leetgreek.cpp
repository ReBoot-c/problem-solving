#include <map>
#include <string>
#include <algorithm>

// Задача: https://www.codewars.com/kata/556025c8710009fc2d000011/train/cpp

std::string greekLeet(std::string str)
{
	std::map<char, std::string> table = {
		{ 'a', "α"},
		{ 'b', "β" },
		{ 'd', "δ" },
		{ 'e', "ε" },
		{ 'i', "ι" },
		{ 'k', "κ" },
		{ 'n', "η" },
		{ 'o', "θ" },
		{ 'p', "ρ" },
		{ 'r', "π" },
		{ 't', "τ" },
		{ 'u', "μ" },
		{ 'v', "υ" },
		{ 'w', "ω" },
		{ 'x', "χ" },
		{ 'y', "γ" }
	};

	std::string leet = "";
	std::transform(str.begin(), str.end(), str.begin(), ::tolower);
	for (const auto i : str) {

		leet += table.find(i) != table.end() ? table[i] : std::string(1, i);
	}
	
	return leet;
}