#include "cpu_core.h"

QString Cpu_core::setProcessor(int index)
{
    QString proc_number = QString::fromStdString(Cpu_core::all_CPUcores.at(index).m_processor_number);
    return proc_number;
}

QString Cpu_core::setvendorId(int index)
{
    QString vendor_id = QString::fromStdString(Cpu_core::all_CPUcores.at(index).m_vendor_id);
    return vendor_id;
}

QString Cpu_core::setcpuFamily(int index)
{
    QString cpu_family = QString::fromStdString(Cpu_core::all_CPUcores.at(index).m_cpu_family);
    return cpu_family;
}

QString Cpu_core::setmodel(int index)
{
    QString model = QString::fromStdString(Cpu_core::all_CPUcores.at(index).m_model);
    return model;
}

QString Cpu_core::setmodelName(int index)
{
    QString model_name = QString::fromStdString(Cpu_core::all_CPUcores.at(index).m_model_name);
    return model_name;
}

QString Cpu_core::setstepping(int index)
{
    QString stepping = QString::fromStdString(Cpu_core::all_CPUcores.at(index).m_stepping);
    return stepping;
}

QString Cpu_core::setcpuMhz(int index)
{
    QString cpu_Mhz = QString::fromStdString(Cpu_core::all_CPUcores.at(index).m_cpu_MHz);
    return cpu_Mhz;
}

QString Cpu_core::setcacheSize(int index)
{
    QString cache_size = QString::fromStdString(Cpu_core::all_CPUcores.at(index).m_cache_size);
    return cache_size;
}

QString Cpu_core::setphysicalId(int index)
{
    QString physicalID = QString::fromStdString(Cpu_core::all_CPUcores.at(index).m_physical_id);
    return physicalID;
}

QString Cpu_core::setsiblings(int index)
{
    QString siblings = QString::fromStdString(Cpu_core::all_CPUcores.at(index).m_siblings);
    return siblings;
}

QString Cpu_core::setcoreId(int index)
{
    QString core_id = QString::fromStdString(Cpu_core::all_CPUcores.at(index).m_core_id);
    return core_id;
}

QString Cpu_core::setcpuCores(int index)
{
    QString core_id = QString::fromStdString(Cpu_core::all_CPUcores.at(index).m_core_id);
    return core_id;
}

QString Cpu_core::setapicid(int index)
{
    QString apic_id = QString::fromStdString(Cpu_core::all_CPUcores.at(index).m_apicid);
    return apic_id;
}

QString Cpu_core::setinitApicid(int index)
{
    QString init_apic_id = QString::fromStdString(Cpu_core::all_CPUcores.at(index).m_init_apicid);
    return init_apic_id;
}

QString Cpu_core::setfpu(int index)
{
    QString fpu = QString::fromStdString(Cpu_core::all_CPUcores.at(index).m_fpu);
    return fpu;
}

QString Cpu_core::setfpuExceptions(int index)
{
    QString fpu_excep = QString::fromStdString(Cpu_core::all_CPUcores.at(index).m_fpu_exceptions);
    return fpu_excep;
}

QString Cpu_core::setcpuid_level(int index)
{
    QString cpuid_lvl = QString::fromStdString(Cpu_core::all_CPUcores.at(index).m_cpuid_level);
    return cpuid_lvl;
}

QString Cpu_core::setwp(int index)
{
    QString wp = QString::fromStdString(Cpu_core::all_CPUcores.at(index).m_wp);
    return wp;
}

QString Cpu_core::setbogomips(int index)
{
    QString bogomips = QString::fromStdString(Cpu_core::all_CPUcores.at(index).m_bogomips);
    return bogomips;
}

QString Cpu_core::setclflushSize(int index)
{
    QString clflushSize = QString::fromStdString(Cpu_core::all_CPUcores.at(index).m_clflush_size);
    return clflushSize;
}

QString Cpu_core::setcacheAlignment(int index)
{
    QString cache_align = QString::fromStdString(Cpu_core::all_CPUcores.at(index).m_cache_alignment);
    return cache_align;
}

QString Cpu_core::setaddressSizes(int index)
{
    QString add_size = QString::fromStdString(Cpu_core::all_CPUcores.at(index).m_address_sizes);
    return add_size;
}

QString Cpu_core::setpowerManagment(int index)
{
    QString power_manag = QString::fromStdString(Cpu_core::all_CPUcores.at(index).m_power_managment);
    return power_manag;
}

int Cpu_core::setNumberCpuCores()
{
    return Cpu_core::numbers_Cpucores;
}

void Cpu_core::setNumbersCpuCores()
{
    Cpu_core::numbers_Cpucores = Cpu_core::all_CPUcores.size();
}


Cpu_core::Cpu_core(QObject *parent) : QObject(parent)
{

}
