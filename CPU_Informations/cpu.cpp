#include "cpu.h"

cpu::cpu(std::vector<std::string> *cpuVector)
{
    int count_processor = 0;
    std::size_t processor_size = cpuVector->size();

    for (auto it = cpuVector->begin(); it != cpuVector->end(); ++it) {
        if (it->compare(0,9,"processor")==0) {count_processor+=1;}
    }
    std::cout << "Anzahl Prozessoren: " << count_processor << std::endl;
    std::cout << "Anzahl CPU Info: " << processor_size << std::endl;
    std::cout << "Anzahl Prozessor Info: " << processor_size/count_processor << std::endl;
}
