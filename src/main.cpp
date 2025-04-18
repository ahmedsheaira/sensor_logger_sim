// src/main.cpp
#include <chrono>
#include <iostream>
#include <thread>
#include "logger.hpp"
#include "simulator.hpp"


int main() {
    SensorSimulator simulator;
    DataLogger logger("sensor_log.csv");

    std::cout << "Logging sensor data. Press Ctrl+C to stop..." << std::endl;

    for (int itr=0 ; itr<10 ; itr++) {
        auto readings = simulator.readAll();
        logger.log(readings);
        for (const auto& [name, value] : readings) {
            std::cout << name << ": " << value << std::endl;
        }
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}
