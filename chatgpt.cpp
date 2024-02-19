#include <iostream>

// Function to modify the value of a variable through reference
int& incrementValue(int& x) {
    x++;
    return x;
}

int main() {
    int number = 5;

    std::cout << "Original value: " << number << std::endl;

    // Calling the function and modifying the original value
    incrementValue(number);

    std::cout << "Modified value: " << number << std::endl;

    return 0;
}