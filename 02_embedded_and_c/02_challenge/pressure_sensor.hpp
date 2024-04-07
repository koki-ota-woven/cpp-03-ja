#pragma once
#include "./units.hpp"


class PressureSensor {
public:
    virtual pressure::psi read() const = 0;
    virtual ~PressureSensor() = default;
};
