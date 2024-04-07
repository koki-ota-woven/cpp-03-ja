#include "./cabin_temperature.hpp"
#include "./units.hpp"

temperature::kelvin CabinTemperature::read() const {
    return temperature::Kelvin(295.15);
}
