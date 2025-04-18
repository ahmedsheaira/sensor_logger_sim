#ifndef SIMULATOR_HPP_
#define SIMULATOR_HPP_

#include <vector>
#include <memory>
#include "sensor.hpp"

/**
 * @brief A temperature sensor that simulates readings.
 */
class TemperatureSensor : public Sensor {
public:
    TemperatureSensor();
    double read() override;
};

/**
 * @brief A humidity sensor that simulates readings.
 */
class HumiditySensor : public Sensor {
public:
    HumiditySensor();
    double read() override;
};

/**
 * @brief A sensor manager that holds and updates a group of sensors.
 */
class SensorSimulator {
public:
    SensorSimulator();

    /**
     * @brief Get the current simulated values from all sensors.
     * @return std::vector<std::pair<std::string, double>>
     */
    std::vector<std::pair<std::string, double>> readAll();

private:
    std::vector<std::unique_ptr<Sensor>> sensors_;
};

#endif
