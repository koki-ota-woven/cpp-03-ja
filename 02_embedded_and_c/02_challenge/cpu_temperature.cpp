#include "./cpu_temperature.hpp"

temperature::kelvin CPUTemperature::read() const {
    return temperature::kelvin(310.15);
}