#include <iostream>
#include "unique_ptr.hpp"

int main() {
    unique_int_ptr my_int(3);
    std::cout << *my_int << std::endl;

    unique_ptr<double> my_double(3.14);
    std::cout << *my_double << std::endl;
}