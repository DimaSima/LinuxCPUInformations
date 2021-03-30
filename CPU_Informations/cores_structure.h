#ifndef CORES_STRUCTURE_H
#define CORES_STRUCTURE_H

#include <QObject>
#include <string>


// store all information output from the command window
// for each core
struct core
{
    Q_GADGET
    Q_PROPERTY(std::string processor_number);
    Q_PROPERTY(std::string vendor_id);
    Q_PROPERTY(std::string cpu_family);
    Q_PROPERTY(std::string model);
    Q_PROPERTY(std::string model_name);
    Q_PROPERTY(std::string stepping);
    Q_PROPERTY(std::string cpu_MHz);
    Q_PROPERTY(std::string cache_size);
    Q_PROPERTY(std::string physical_id);
    Q_PROPERTY(std::string siblings);
    Q_PROPERTY(std::string core_id);
    Q_PROPERTY(std::string cpu_cores);
    Q_PROPERTY(std::string apicid);
    Q_PROPERTY(std::string init_apicid);
    Q_PROPERTY(std::string fpu);
    Q_PROPERTY(std::string fpu_exceptions);
    Q_PROPERTY(std::string cpuid_level);
    Q_PROPERTY(std::string wp);
    Q_PROPERTY(std::string bogomips);
    Q_PROPERTY(std::string clflush_size);
    Q_PROPERTY(std::string cache_alignment);
    Q_PROPERTY(std::string address_sizes);
    Q_PROPERTY(std::string power_managment);
};

#endif // CORES_STRUCTURE_H
