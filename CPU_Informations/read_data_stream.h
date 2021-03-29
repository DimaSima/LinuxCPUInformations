#ifndef READ_DATA_STREAM_H
#define READ_DATA_STREAM_H

#include <cores_structure.h>
#include <vector>
#include <string>

std::vector<core> ReadCoreInformations();
void describeCore(std::vector<core> &all_cores, size_t index, std::string &line);
void parseCPUInformation(std::string &line);

void print_CPUVector(std::vector<std::string> *cpuVector);

#endif // READ_DATA_STREAM_H
