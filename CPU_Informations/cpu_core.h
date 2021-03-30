#ifndef CPU_CORE_H
#define CPU_CORE_H

#include <QObject>
#include <string>
#include <QDebug>
#include <QDateTime>


// store all information output from the command window
// for each core
struct core
{
    Q_GADGET
    public:
        std::string m_processor_number;
        std::string m_vendor_id;
        std::string m_cpu_family;
        std::string m_model;
        std::string m_model_name;
        std::string m_stepping;
        std::string m_cpu_MHz;
        std::string m_cache_size;
        std::string m_physical_id;
        std::string m_siblings;
        std::string m_core_id;
        std::string m_cpu_cores;
        std::string m_apicid;
        std::string m_init_apicid;
        std::string m_fpu;
        std::string m_fpu_exceptions;
        std::string m_cpuid_level;
        std::string m_wp;
        std::string m_bogomips;
        std::string m_clflush_size;
        std::string m_cache_alignment;
        std::string m_address_sizes;
        std::string m_power_managment;

        /*
        Q_PROPERTY(std::string processor_number MEMBER m_processor_number);
        Q_PROPERTY(std::string vendor_id MEMBER m_vendor_id);
        Q_PROPERTY(std::string cpu_family MEMBER m_cpu_family);
        Q_PROPERTY(std::string model MEMBER m_model);
        Q_PROPERTY(std::string model_name MEMBER m_model_name);
        Q_PROPERTY(std::string stepping MEMBER m_stepping);
        Q_PROPERTY(std::string cpu_MHz MEMBER m_cpu_MHz);
        Q_PROPERTY(std::string cache_size MEMBER m_cache_size);
        Q_PROPERTY(std::string physical_id MEMBER m_physical_id);
        Q_PROPERTY(std::string siblings MEMBER m_siblings);
        Q_PROPERTY(std::string core_id MEMBER m_core_id);
        Q_PROPERTY(std::string cpu_cores MEMBER m_cpu_cores);
        Q_PROPERTY(std::string apicid MEMBER m_apicid);
        Q_PROPERTY(std::string init_apicid MEMBER m_init_apicid);
        Q_PROPERTY(std::string fpu MEMBER m_fpu);
        Q_PROPERTY(std::string fpu_exceptions MEMBER m_fpu_exceptions);
        Q_PROPERTY(std::string cpuid_level MEMBER m_cpuid_level);
        Q_PROPERTY(std::string wp MEMBER m_wp);
        Q_PROPERTY(std::string bogomips MEMBER m_bogomips);
        Q_PROPERTY(std::string clflush_size MEMBER m_clflush_size);
        Q_PROPERTY(std::string cache_alignment MEMBER m_cache_alignment);
        Q_PROPERTY(std::string address_sizes MEMBER m_address_sizes);
        Q_PROPERTY(std::string power_managment MEMBER m_power_managment); */
};

class Cpu_core : public QObject
{
    Q_OBJECT

public:
    explicit Cpu_core(QObject *parent = nullptr);
    Q_INVOKABLE QString setProcessor(int index);
    Q_INVOKABLE QString setvendorId(int index);
    Q_INVOKABLE QString setcpuFamily(int index);
    Q_INVOKABLE QString setmodel(int index);
    Q_INVOKABLE QString setmodelName(int index);
    Q_INVOKABLE QString setstepping(int index);
    Q_INVOKABLE QString setcpuMhz(int index);
    Q_INVOKABLE QString setcacheSize(int index);
    Q_INVOKABLE QString setphysicalId(int index);
    Q_INVOKABLE QString setsiblings(int index);
    Q_INVOKABLE QString setcoreId(int index);
    Q_INVOKABLE QString setcpuCores(int index);
    Q_INVOKABLE QString setapicid(int index);
    Q_INVOKABLE QString setinitApicid(int index);
    Q_INVOKABLE QString setfpu(int index);
    Q_INVOKABLE QString setfpuExceptions(int index);
    Q_INVOKABLE QString setcpuid_level(int index);
    Q_INVOKABLE QString setwp(int index);
    Q_INVOKABLE QString setbogomips(int index);
    Q_INVOKABLE QString setclflushSize(int index);
    Q_INVOKABLE QString setcacheAlignment(int index);
    Q_INVOKABLE QString setaddressSizes(int index);
    Q_INVOKABLE QString setpowerManagment(int index);
    Q_INVOKABLE int setNumberCpuCores();

    void setNumbersCpuCores();

    std::vector<core> all_CPUcores;

private:
    qint8 numbers_Cpucores = 0;

signals:

};

#endif // CPU_CORE_H
