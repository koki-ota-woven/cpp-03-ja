#include "./cpu_temperature.hpp"
#include "./cabin_temperature.hpp"
#include "./tire_pressure.hpp"
#include <iostream>


int main() {
    CPUTemperature cpuTemp;
    CabinTemperature cabinTemp;
    TirePressure tirePressure;

    std::cout << "CPU Temperature: " << cpuTemp.read().value << " kelvin" << std::endl;
    std::cout << "Cabin Temperature: " << cabinTemp.read().value << " kelvin" << std::endl;
    std::cout << "Tire Pressure: " << tirePressure.read().value << " psi" << std::endl;

    return 0;
}