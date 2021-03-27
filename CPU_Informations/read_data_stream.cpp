#include "iostream"
#include "fstream"
#include "string"
#include "vector"

#include <read_data_stream.h>

void ReadStatsCPU()
{
    std::ifstream cpuInfo("/proc/cpuinfo");
    std::string line;
    std::vector<std::string> cpu_vector;

    while (std::getline(cpuInfo,line))
    {
        std::cout << "CPU Ausgabe: " << line << std::endl;
        cpu_vector.push_back(line);
    }

}
