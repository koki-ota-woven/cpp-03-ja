#include "./templates.hpp"
#include <iostream>

int main() {
    auto result1 = sum(1, 2, 3, 4, 5);
    auto result2 = sum(10, 20);
    auto result3 = sum(3);

    std::cout << "result1: " << result1 << std::endl;
    std::cout << "result2: " << result2 << std::endl;
    std::cout << "result3: " << result3 << std::endl;

    return 0;
}