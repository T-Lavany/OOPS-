#include <iostream>
#include <vector>
#include <unordered_set>

bool containsDuplicates(const std::vector<int>& nums) {
    std::unordered_set<int> uniqueElements;

    for (int num : nums) {
        if (uniqueElements.count(num) > 0) {
            // Found a duplicate
            return true;
        }
        uniqueElements.insert(num);
    }

    // No duplicates found
    return false;
}

int main() {
    std::vector<int> array = {1, 2, 3, 4, 5, 1}; // Example array with duplicates

    if (containsDuplicates(array)) {
        std::cout << "Array contains duplicates." << std::endl;
    } else {
        std::cout << "Array does not contain duplicates." << std::endl;
    }

    return 0;
}

