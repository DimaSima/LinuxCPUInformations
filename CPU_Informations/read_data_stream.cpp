#include "iostream"
#include "fstream"

#include <read_data_stream.h>


void ReadCoreInformations(Cpu_core & my_core)
{
    /* This function reads the data from the Linux command window
     * and writes it to the corresponding core-struct
    */

    std::ifstream cpuInfo("/proc/cpuinfo");
    std::string line;

    const std::string CPU_CORE("processor");
    const std::size_t size_CPU_CORE = CPU_CORE.size();
    const std::string CPU_FLAGS("flags");
    const std::size_t size_CPU_FLAGS = CPU_FLAGS.size();
    const std::string CPU_BUGS("bugs");
    const std::size_t size_CPU_BUGS = CPU_BUGS.size();

    std::size_t index_core = 0;
    bool new_core_flag = false;

    while (std::getline(cpuInfo,line))
    {
        if (line.compare(0,size_CPU_CORE,CPU_CORE)==0)
        {
            new_core_flag=true;
            index_core+=1;
        }

        // check if information from new core is incoming
        if (new_core_flag)
        {
            // add new core into vector variable
            my_core.all_CPUcores.emplace_back(core());
            new_core_flag = false;
        }

        // ignore flags and bugs information
        if (line.compare(0,size_CPU_FLAGS,CPU_FLAGS)==0) {continue;}
        else if (line.compare(0,size_CPU_BUGS,CPU_BUGS)==0) {continue;}
        else {
            describeCore(my_core.all_CPUcores,index_core-1,line);
        }
    }
}


void describeCore(std::vector<core> &all_cores, size_t index, std::string &line)
{
    /* This function compare the incoming line-value with specifig string-name
     * and  writes it into Struct variable
     * Also the current index of the vector is passed, to determine the current cpu-core
    */
    if (line.compare(0,9,"processor")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).m_processor_number = line;
    }

    else if (line.compare(0,9,"vendor_id")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).m_vendor_id = line;
    }

    else if (line.compare(0,10,"cpu family")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).m_cpu_family = line;
    }

    else if (line.compare(0,5,"model")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).m_model = line;
    }

    else if (line.compare(0,10,"model name")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).m_model_name = line;
    }

    else if (line.compare(0,8,"stepping")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).m_stepping = line;
    }

    else if (line.compare(0,7,"cpu MHz")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).m_cpu_MHz = line;
    }

    else if (line.compare(0,10,"cache size")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).m_cache_size = line;
    }

    else if (line.compare(0,11,"physical id")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).m_physical_id = line;
    }

    else if (line.compare(0,8,"siblings")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).m_siblings = line;
    }

    else if (line.compare(0,7,"core id")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).m_core_id = line;
    }

    else if (line.compare(0,9,"cpu cores")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).m_cpu_cores = line;
    }

    else if (line.compare(0,6,"apicid")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).m_apicid = line;
    }

    else if (line.compare(0,14,"initial apicid")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).m_init_apicid = line;
    }

    else if (line.compare(0,3,"fpu")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).m_fpu = line;
    }

    else if (line.compare(0,13,"fpu_exception")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).m_fpu_exceptions = line;
    }

    else if (line.compare(0,11,"cpuid level")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).m_cpuid_level = line;
    }

    else if (line.compare(0,2,"wp")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).m_wp = line;
    }

    else if (line.compare(0,8,"bogomips")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).m_bogomips = line;
    }

    else if (line.compare(0,12,"clflush size")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).m_clflush_size = line;
    }

    else if (line.compare(0,15,"cache_alignment")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).m_cache_alignment = line;
    }

    else if (line.compare(0,13,"address sizes")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).m_address_sizes = line;
    }

    else if (line.compare(0,16,"power management")==0)
    {
        parseCPUInformation(line);
        all_cores.at(index).m_power_managment = line;
    }
}


void parseCPUInformation(std::string &line)
{
    /* This function parse the string variable line
     * Everything that comes after ":" is taken over
     * */
    std::string delimiter = ":";
    line = line.substr(line.find(delimiter)+1);
}
