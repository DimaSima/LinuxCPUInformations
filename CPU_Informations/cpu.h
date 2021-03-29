#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <vector>
#include <string>
#include <iostream>


class cpu
{
public:
    cpu(std::vector<std::string> *cpuVector);


private:
    struct core
    {
        std::string processor_number;
        std::string vendor_id;
        std::string cpu_family;
        std::string model;
        std::string model_name;
        std::string stepping;
        std::string cpu_MHz;
        std::string cache_size;
        std::string physical_id;
        std::string siblings;
        std::string core_id;
        std::string cpu_cores;
        std::string apicid;
        std::string init_apicid;
        std::string fpu;
        std::string fpu_exceptions;
        std::string cpuid_level;
        std::string wp;
        std::string bogomips;
        std::string clflush_size;
        std::string cache_alignment;
        std::string address_sizes;
        std::string power_managment;
    };

    std::vector<core> cores;

};

#endif // PROCESSOR_H
