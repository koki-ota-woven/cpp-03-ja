#include "./led_controller.hpp"
#include <iostream>


int main() {
    LedController led;
    led.initialize();
    led.turnOn();
    std::cout << "LED is " << (led.getState() ? "ON" : "OFF") << std::endl;
    led.turnOff();
    std::cout << "LED is " << (led.getState() ? "ON" : "OFF") << std::endl;

    return 0;
}
