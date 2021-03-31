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

};

class Cpu_core : public QObject
{
    Q_OBJECT

public:
    explicit Cpu_core(QObject *parent = nullptr);
    // Set struct member variables in QML
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
