#include "iostream"
#include "fstream"

#include <read_data_stream.h>


std::vector<core> ReadCoreInformations()
{
    std::vector<core> all_CPUcores;
    std::ifstream cpuInfo("/proc/cpuinfo");
    std::string line;

    const std::string CPU_CORE("processor");
    const std::size_t size_CPU_CORE = CPU_CORE.size();
    const std::string CPU_FLAGS("flags");
    const std::size_t size_CPU_FLAGS = CPU_FLAGS.size();
    const std::string CPU_BUGS("bugs");
    const std::size_t size_CPU_BUGS = CPU_BUGS.size();

    std::size_t index_core = 0;
    int new_core_flag = false;

    while (std::getline(cpuInfo,line))
    {
        if (line.compare(0,size_CPU_CORE,CPU_CORE)==0)
        {
            new_core_flag=true;
            index_core+=1;
        }

        if (new_core_flag)
        {
            all_CPUcores.emplace_back(core());
            new_core_flag = false;
        }

        if (line.compare(0,size_CPU_FLAGS,CPU_FLAGS)==0) {continue;}
        else if (line.compare(0,size_CPU_BUGS,CPU_BUGS)==0) {continue;}
        else {
            describeCore(all_CPUcores,index_core-1,line);
        }
    }
    return all_CPUcores;
}


void describeCore(std::vector<core> &all_cores, size_t index, std::string &line)
{

    if (line.compare(0,9,"processor")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).processor_number = line;
        std::cout << "cores processor: " << all_cores.at(index).processor_number << std::endl;
    }

    else if (line.compare(0,9,"vendor_id")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).vendor_id = line;
        std::cout << "cores vendor: " << all_cores.at(index).vendor_id << std::endl;
    }

    else if (line.compare(0,10,"cpu family")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).cpu_family = line;
        std::cout << "cores cpu family: " << all_cores.at(index).cpu_family << std::endl;
    }

    else if (line.compare(0,5,"model")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).model = line;
        std::cout << "cores model: " << all_cores.at(index).model << std::endl;
    }

    else if (line.compare(0,10,"model name")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).model_name = line;
        std::cout << "cores model name: " << all_cores.at(index).model_name << std::endl;
    }

    else if (line.compare(0,8,"stepping")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).stepping = line;
        std::cout << "cores stepping: " << all_cores.at(index).stepping << std::endl;
    }

    else if (line.compare(0,7,"cpu MHz")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).cpu_MHz = line;
        std::cout << "cores cpu Mhz: " << all_cores.at(index).cpu_MHz << std::endl;
    }

    else if (line.compare(0,10,"cache size")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).cache_size = line;
        std::cout << "cores cache size: " << all_cores.at(index).cache_size << std::endl;
    }

    else if (line.compare(0,11,"physical id")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).physical_id = line;
        std::cout << "cores physical id: " << all_cores.at(index).physical_id << std::endl;
    }

    else if (line.compare(0,8,"siblings")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).siblings = line;
        std::cout << "cores siblings: " << all_cores.at(index).siblings << std::endl;
    }

    else if (line.compare(0,7,"core id")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).core_id = line;
        std::cout << "cores core id: " << all_cores.at(index).core_id << std::endl;
    }

    else if (line.compare(0,9,"cpu cores")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).cpu_cores = line;
        std::cout << "cores cpu cores: " << all_cores.at(index).cpu_cores << std::endl;
    }

    else if (line.compare(0,6,"apicid")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).apicid = line;
        std::cout << "cores apicid: " << all_cores.at(index).apicid << std::endl;
    }

    else if (line.compare(0,14,"initial apicid")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).init_apicid = line;
        std::cout << "cores init apicid: " << all_cores.at(index).init_apicid << std::endl;
    }

    else if (line.compare(0,3,"fpu")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).fpu = line;
        std::cout << "cores fpu: " << all_cores.at(index).fpu << std::endl;
    }

    else if (line.compare(0,13,"fpu_exception")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).fpu_exceptions = line;
        std::cout << "cores fpu excep: " << all_cores.at(index).fpu_exceptions << std::endl;
    }

    else if (line.compare(0,11,"cpuid level")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).cpuid_level = line;
        std::cout << "cores cpuid level: " << all_cores.at(index).cpuid_level << std::endl;
    }

    else if (line.compare(0,2,"wp")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).wp = line;
        std::cout << "cores wp: " << all_cores.at(index).wp << std::endl;
    }

    else if (line.compare(0,8,"bogomips")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).bogomips = line;
        std::cout << "cores bogomips: " << all_cores.at(index).bogomips << std::endl;
    }

    else if (line.compare(0,12,"clflush size")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).clflush_size = line;
        std::cout << "cores clflush size: " << all_cores.at(index).clflush_size << std::endl;
    }

    else if (line.compare(0,15,"cache_alignment")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).cache_alignment = line;
        std::cout << "cores cache align: " << all_cores.at(index).cache_alignment << std::endl;
    }

    else if (line.compare(0,13,"address sizes")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).address_sizes = line;
        std::cout << "cores addr sizes: " << all_cores.at(index).address_sizes << std::endl;
    }

    else if (line.compare(0,16,"power management")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).power_managment = line;
        std::cout << "cores power manag: " << all_cores.at(index).power_managment << std::endl;
    }
}


void parseCPUInformation(std::string &line)
{
    std::string delimiter = ":";
    line = line.substr(line.find(delimiter)+1);
}
