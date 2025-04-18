// src/sensor.cpp
#include "sensor.hpp"

Sensor::Sensor(const std::string& name) : name_(name) {}

std::string Sensor::getName() const {
    return name_;
}
