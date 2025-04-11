#include "SJF.h"
#include <vector>
#include "Process.h"
#include <cstdlib>  
#include <algorithm>

SJF::SJF()
{
}

SJF::~SJF()
{
}
//tme from arrival to finish in system
void SJF::setTurnAround(Process& process){
    int finish = process.getStart() + process.getBurstTime();
    process.setTurnAround(finish - process.getArrivalTime());
}
 //wait time   
void SJF::setWait(Process& process){
    int finish = process.getStart() - process.getArrivalTime();
    process.setWaitingTime(finish);
}
//process start time
void SJF::setStart(int currentTime, Process& process){
    process.setStart(currentTime);
}

void SJF::setFinish(Process& process){
    int finish = process.getStart() + process.getBurstTime();
    process.setFinish(finish);
}

std::vector<Process> SJF::simulate(std::vector<Process> processes){
    
    std::vector<Process> modifiedList;
    std::sort(processes.begin(), processes.end(), [](const Process& a, const Process& b) {
        return a.getArrivalTime() < b.getArrivalTime();});
    
    int index = 0;
    Process next;
    
    bool found = false;
    int currentTime = processes[0].getArrivalTime();
    
    while(!processes.empty()){
        found = false;
        index = 0;
        next = processes[0];

        for(long unsigned int i = 0; i < processes.size(); i++){
            if(processes[i].getArrivalTime() > currentTime){
                break;
            }
            if(processes[i].getBurstTime() < next.getBurstTime()){
                found = true;
                next = processes[i];
                index = i;
            }
         
        }
        
        if(!found && index != 0){
            currentTime = next.getArrivalTime();
        }
        setStart(currentTime, next);
        setTurnAround(next);
        setWait(next);
        setFinish(next);
        modifiedList.push_back(next);
        processes.erase(processes.begin() + index);
        currentTime = next.getFinish();
    }

    return modifiedList;
}
