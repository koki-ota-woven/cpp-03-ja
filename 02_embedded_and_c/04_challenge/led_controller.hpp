#pragma once
extern "C" {
#include "led_controller.h"
}

class LedController {
public:
    void initialize();
    void turnOn();
    void turnOff();
    bool getState() const;
};

