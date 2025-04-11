#ifndef _SJF_
#define _SJF_
#include "Process.h"
#include <vector>

class SJF
{
private:
    void setStart(int currentTime, Process& process);
    void setFinish(Process& process);
    void setWait(Process& process);
    void setTurnAround(Process& process);
  
public:
    SJF();
    ~SJF();
    
    std::vector<Process> simulate(std::vector<Process> processes);

};

#endif // _SJF_
