// src/logger.cpp
#include "logger.hpp"

DataLogger::DataLogger(const std::string& filename) {
    file_.open(filename, std::ios::out);
    if (file_.is_open())
        file_ << "Timestamp, Sendor, Value\n";
}

void DataLogger::log(const std::vector<std::pair<std::string, double>>& data) {
    auto t = std::time(nullptr);
    auto tm = *std::localtime(&t);

    char buffer[64];
    std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", &tm);

    for (const auto& [name, value] : data) {
        file_ << buffer << "," << name << "," << value << "\n";
    }
}

DataLogger::~DataLogger() {
    if (file_.is_open())
        file_.close();
}
