#include "double_array.h"
#include <array>
#include <iostream>


int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    double_array(arr.data(), arr.size());
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std:: endl;
    return 0;
}