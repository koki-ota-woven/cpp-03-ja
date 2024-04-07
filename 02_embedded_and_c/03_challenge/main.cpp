#include "./clamp.hpp"
#include "./constexpr.hpp"
#include "./traffic_light.hpp"

#include <iostream>


int main() {
    std::cout << "Green light duration: " << trafficLightDuration(TrafficLightState::green) << "seconds" << "\n";
    std::cout << "Clamped (5 between 0 and 10): " << clamp(5, 0, 10) << "\n";
    std::cout << "Clamped (15.5 between 0.0 and 10.0): " << clamp(15.5, 0.0, 10.0) << "\n";
    std::cout << "Circumference of a circle with radius 5: " << calculateCircumference(5) << std::endl;
    return 0;
}