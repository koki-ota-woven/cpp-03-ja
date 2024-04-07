#pragma once
#include "./temperature_sensor.hpp"
#include "./units.hpp"

class CabinTemperature : public TemepratureSensor {
public:
    temperature::kelvin read() const override;
};
