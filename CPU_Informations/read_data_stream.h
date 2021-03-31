#ifndef READ_DATA_STREAM_H
#define READ_DATA_STREAM_H


#include <cpu_core.h>
#include <vector>
#include <string>

void ReadCoreInformations(Cpu_core & core);
void describeCore(std::vector<core> &all_cores, size_t index, std::string &line);
void parseCPUInformation(std::string &line);


#endif // READ_DATA_STREAM_H
