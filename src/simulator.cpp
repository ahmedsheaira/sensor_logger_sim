// src/simulator.cpp
#include "simulator.hpp"

TemperatureSensor::TemperatureSensor() : Sensor("Temperature") {}
HumiditySensor::HumiditySensor() : Sensor("Humidity") {}

double TemperatureSensor::read() {
    return 20.0 + static_cast<double>(rand() % 1000) / 100.0;   // 20˚C to 30˚C
}

double HumiditySensor::read() {
    return 40.0 + static_cast<double>(rand() % 500) / 10.0; // 40% to 90%
}

SensorSimulator::SensorSimulator() {
    sensors_.push_back(std::make_unique<TemperatureSensor>());
    sensors_.push_back(std::make_unique<HumiditySensor>());
}

std::vector<std::pair<std::string, double>> SensorSimulator::readAll() {
    std::vector<std::pair<std::string, double>> readings;
    for (const auto& sensor : sensors_) {
        readings.emplace_back(sensor->getName(), sensor->read());
    }
    return readings;
}
