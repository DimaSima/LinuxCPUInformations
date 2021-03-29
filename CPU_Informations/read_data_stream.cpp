#include "iostream"
#include "fstream"


#include <read_data_stream.h>

std::vector<std::string> ReadCPUStats()
{
    std::ifstream cpuInfo("/proc/cpuinfo");
    std::string line;
    std::vector<std::string> cpu_vector;
    int count_processor = 0;

    while (std::getline(cpuInfo,line))
    {
        //Parse not important information out, because too much text

        if (line.compare(0,5,"flags")==0) {continue;}

        else if (line.compare(0,4,"bugs")==0) {continue;}

        else if (line.compare(0,9,"processor")==0) {count_processor+=1;}

        else {cpu_vector.push_back(line);}
    }
    std::cout << "Anzahl Prozessoren: " << count_processor << std::endl;
    return cpu_vector;
}


void parse_CPUVector(std::vector<std::string> *cpuVector)
{
    for (auto it = cpuVector->begin(); it != cpuVector->end();)
    {

        if (*it == "model")
        {
            std::cout << "Das ist it: " << *it << std::endl;
            it = cpuVector->erase(it);
        }
        else if (*it == "flags")
        {
            it = cpuVector->erase(it);
        }
        else if (*it == "bugs")
        {
            it = cpuVector->erase(it);
        }
        else {
            ++it;
        }
    }
}

void print_CPUVector(std::vector<std::string> *cpuVector)
{
    std::size_t vector_size = cpuVector->size();

    for (std::size_t i = 0; i < vector_size; i++)
    {
        std::cout << "Neuer Vector: " << cpuVector->at(i) << std::endl;
    }
}



