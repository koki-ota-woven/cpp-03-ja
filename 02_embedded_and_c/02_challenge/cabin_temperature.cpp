#include "./cabin_temperature.hpp"

temperature::kelvin CabinTemperature::read() const {
    return temperature::kelvin(295.15);
}
