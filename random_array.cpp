#include <iostream>
#include <vector>

int findMissingNumber(const std::vector<int>& arr) {
    int n = arr.size() + 1;  // One number is missing, so the array size is n-1

    // XOR of all numbers from 1 to n
    int xorTotal = 0;
    for (int i = 1; i <= n; ++i) {
        xorTotal ^= i;
        std::cout << xorTotal << std::endl;
    }

    std::cout << "selim: " << xorTotal << std::endl;

    // XOR of all elements in the array
    int xorArray = 0;
    for (int num : arr) {
        xorArray ^= num;
    }

    // XOR of the total and actual gives the missing number
    return xorTotal ^ xorArray;
}

int main() {
    std::vector<int> numbers = {1, 2, 4, 6, 3, 7, 8};

    int missingNumber = findMissingNumber(numbers);

    std::cout << "The missing number is: " << missingNumber << std::endl;

    return 0;
}
