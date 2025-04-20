#ifndef _RR_
#define _RR_
#include "Process.h"
#include <vector>
#include <queue>
class RR
{
private:
    void setStart(int currentTime, Process& process);
    void setFinish(int currentTime, Process& process);
    void setWait(Process& process);
    void setTurnAround(Process& process);
public:
    int  MAXTIME;
    RR();
    ~RR();
    std::vector<Process> simulate(std::vector<Process> processes);
};

#endif // _RR_
