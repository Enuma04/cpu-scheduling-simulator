#include "RR.h"
#include "Process.h"
#include <vector>
#include <queue>
#include <cstdlib>  
#include <algorithm>
RR::RR()
{
    MAXTIME = 2;
}

RR::~RR()
{
}

//time from arrival to finish in system
void RR::setTurnAround(Process& process){
    int finish = process.getStart() + process.getBurstTime();
    process.setTurnAround(finish - process.getArrivalTime());
}
 //wait time   
void RR::setWait(Process& process){
    process.setWaitingTime(process.getStart() - process.getArrivalTime());
}
//process start time
void RR::setStart(int currentTime, Process& process){
    process.setStart(currentTime);
}

void RR::setFinish(int currentTime, Process& process){
    process.setFinish(currentTime);
}


std::vector<Process> RR::simulate(std::vector<Process> processes){
    std::queue<Process*> readyQueue;
    std::vector<Process> modifiedList;
    
    //int start = std::max(processPrev.getFinish(), process.getArrivalTime()) ;
    //processes.erase(processes.begin() + i);
    
    std::sort(processes.begin(), processes.end(), [](const Process& a, const Process& b) {
        return a.getArrivalTime() < b.getArrivalTime();});
    
    int currentTime = processes[0].getArrivalTime();
   
    while(!readyQueue.empty() || !processes.empty()){
        while (!processes.empty() && processes[0].getArrivalTime() <= currentTime){
            readyQueue.push(&processes[0]);
            processes.erase(processes.begin());
        }
               if (readyQueue.empty()) {
            currentTime = processes[0].getArrivalTime();
            continue;
        }
        int remainingTime = readyQueue.front()->getRemainingTime();
        int quantum = std::min(remainingTime, MAXTIME) ;
        if(readyQueue.front()->getStart() == -1){
            readyQueue.front()->setStart(currentTime);
        }
        currentTime += quantum;
        
        Process* current = readyQueue.front();
        readyQueue.pop(); 
        if(remainingTime <= MAXTIME){
            current->setRemainingTime(0);
            setTurnAround(*current);
            setWait(*current);
            setFinish(currentTime, *current);
            modifiedList.push_back(*current);
        }
        else{
            current->setRemainingTime(remainingTime - MAXTIME);
            readyQueue.push(current);
        }
        
    }
    return modifiedList;
}

