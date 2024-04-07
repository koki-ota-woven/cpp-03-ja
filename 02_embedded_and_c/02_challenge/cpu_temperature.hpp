#pragma once
#include "./temperature_sensor.hpp"


class CPUTemperature : public TemperatureSensor {
public:
    temperature::kelvin read() const override;
};
