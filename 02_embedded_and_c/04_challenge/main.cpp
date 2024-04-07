#include "./led_controller.hpp"
#include <iostream>


int main() {
    LedController led;
    led.initialize();
    led.on();
    std::cout << "LED is " << (led.getState() ? "ON" : "OFF") << std::endl;
    led.off();
    std::cout << "LED is " << (led.getState() ? "ON" : "OFF") << std::endl;

    return 0;
}