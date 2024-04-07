#include "./templates.hpp"
#include <iostream>

int main() {
    std::cout << std::boolalpha;
    std::cout << "allTrue(true, true, true): " << allTrue(true, true, true) << std::endl; // true
    std::cout << "allTrue(true, false, true): " << allTrue(true, false, true) << std::endl; // false
    std::cout << "allTrue(): " << allTrue() << std::endl; // true

    return 0;
}