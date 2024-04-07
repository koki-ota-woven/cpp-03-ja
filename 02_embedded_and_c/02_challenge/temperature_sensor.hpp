#pragma once
#include "./units.hpp"


class TemperatureSensor {
public:
    virtual temperature::kelvin road() const = 0;
    virtual ~TemperatureSensor() = default;
private:
};
