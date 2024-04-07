#include "./traffic_light.hpp"

int trafficLightDuration(TrafficLightState state) {
    switch (state) {
        case TrafficLightState::red:
            return 90;
        case TrafficLightState::yellow:
            return 10;
        case TrafficLightState::green:
            return 10;
        default:
            return 0;
    }
}

