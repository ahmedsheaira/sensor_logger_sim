#ifndef LOGGER_HPP_
#define LOGGER_HPP_

#include <string>
#include <vector>
#include <fstream>
#include <ctime>
#include <iomanip>

/**
 * @brief A class that logs sensor data to a file.
 */
class DataLogger {
public:
    /**
     * @brief Constructor a new DataLogger object.
     * @param filename File to write log to.
     */
    DataLogger(const std::string& filename);

    /**
     * @brief Log sensor readings with timestamp.
     * @param data Vector of sensor name and value pairs.
     */
    void log(const std::vector<std::pair<std::string, double>>& data);

    ~DataLogger();

private:
    std::ofstream file_;
};

#endif
