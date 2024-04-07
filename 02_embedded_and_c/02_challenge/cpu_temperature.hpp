#pragma once
#include "./temperature_sensor.hpp"
#include "./units.hpp"


class CPUTemperature : public TemperatureSensor {
public:
    temperature::kelvin read() const override;
};
