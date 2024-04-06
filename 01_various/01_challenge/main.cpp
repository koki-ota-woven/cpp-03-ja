#include "./timer.hpp"
#include <thread>


int main() {
    {
        Timer t;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}