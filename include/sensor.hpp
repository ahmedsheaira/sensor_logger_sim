/// @file sensor.hpp
/// @brief

#ifndef SENSOR_HPP_
#define SENSOR_HPP_

#pragma once
#include <string>
#include <random>

/**
 * @brief Base class representing a generic sensor.
 */
class Sensor {
public:
    /**
     * @brief Construct a new Sensor object.
     * @param name The name of the sensor.
     */
    Sensor(const std::string& name);

    /**
     * @brief Get a simulated sensor reading.
     * @return double Simulated value.
     */
    virtual double read() = 0;

    /**
     * @brief Get the sensor name.
     * @return std::string
     */
    std::string getName() const;

    virtual ~Sensor() = default;

protected:
    std::string name_;
};

#endif
