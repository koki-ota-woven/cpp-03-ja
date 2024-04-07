#pragma once
extern "C" {
#include "led_controller.h"
}

class LedController {
public:
    void initialize();
    void on();
    void off();
    bool getState() const;
};

