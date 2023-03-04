// Задача: https://www.codewars.com/kata/52b7ed099cdc285c300001cd/train/cpp

// TODO: Интервалы не дожны дублироваться
#include <vector>
#include <utility>
#include <algorithm>

int sum_intervals(std::vector<std::pair<int, int>> intervals) {
	std::sort(intervals.begin(), intervals.end());
	int first = intervals[0].first;
	int second = intervals[0].second;
	int summary = 0;

	if (intervals.size() == 1) {
		return second - first;
	}

	for (int i = 1; i < intervals.size(); i++) {
		int firstCurrent = intervals[i].first;
		int secondCurrent = intervals[i].second;

		if (firstCurrent > second) {
			summary += second - first;
			first = firstCurrent;
			second = secondCurrent;
		}
		else {
			second = std::max(second, secondCurrent);
		}
	}
	summary += second - first;

	return summary;
}

