#include "./led_controller.hpp"


void LedController::initialize() {
    led_init();
}

void LedController::on() {
    led_on();
}

void LedController::off() {
    led_off();
}

bool LedController::getState() const {
    return led_get_state();
}
