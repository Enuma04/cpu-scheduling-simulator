#ifndef _FCFS_
#define _FCFS_
#include "Process.h"
#include <cstdlib>  
#include <algorithm>

class fcfs
{
private:
    void setTurnAround(Process& process);
    void setStart(const Process& processPrev, Process& process);
    void setFinish(Process& process);
    void setWait(const Process& processPrev, Process& process);
public:
    fcfs();
    ~fcfs();
    void simulate(Process arr[], int size);
};

#endif // _FCFS_
