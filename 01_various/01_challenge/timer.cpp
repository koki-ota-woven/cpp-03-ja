#include "./timer.hpp"
#include <iostream>


Timer::Timer() : start_(std::chrono::high_resolution_clock::now()){
    std::cout << "Timer instance was created" << std::endl;
}

Timer::~Timer() {
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> elapsed = end - start_;
    std::cout << "Timer instance was destroyed" << std::endl;
    std::cout << "Elapsed time: " << elapsed.count() << "ms\n";
}