#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

template <typename T> std::vector<T> uniqueInOrder(const std::vector<T>& iterable) {
    /*Решение 1
    * Раньше использовал его, пока не узнал про еще один способ.
    */

    std::vector<T> iterableCopy;

    std::copy(iterable.begin(), iterable.end(), std::back_inserter(iterableCopy));
    iterableCopy.erase(std::unique(iterableCopy.begin(), iterableCopy.end()), iterableCopy.end());
    return iterableCopy;
}

std::vector<char> uniqueInOrder(const std::string& iterable) {
    /*Решение 2
    * Оказалось, что на codewars этот способ в топ 1 находится.
    */
    std::vector<char> iterableCopy;

    std::unique_copy(iterable.begin(), iterable.end(), std::back_inserter(iterableCopy));
    return iterableCopy;
}
