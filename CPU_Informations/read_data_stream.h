#ifndef READ_DATA_STREAM_H
#define READ_DATA_STREAM_H

#include <vector>
#include <string>

std::vector<std::string> ReadCPUStats();
void parse_CPUVector(std::vector<std::string> *cpuVector);
void print_CPUVector(std::vector<std::string> *cpuVector);

#endif // READ_DATA_STREAM_H
