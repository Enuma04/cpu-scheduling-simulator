#include "fcfs.h"
#include "Process.h"
#include <cstdlib>  
#include <algorithm>

fcfs::fcfs()
{
}

fcfs::~fcfs()
{
}

void fcfs::setTurnAround(Process& process){
        int finish = process.getStart() + process.getBurstTime();
        process.setTurnAround(finish - process.getArrivalTime());
}
    
void fcfs::setWait(const Process& processPrev, Process& process){
        int finish = processPrev.getFinish();
        int diff = finish - process.getArrivalTime();
        int wait =  diff > -1 ? diff : 0;
        process.setWaitingTime(wait);
}

void fcfs::setStart(const Process& processPrev, Process& process){
        int start = std::max(processPrev.getFinish(), process.getArrivalTime()) ;
        process.setStart(start);
}

void fcfs::setFinish(Process& process){
        int finish = process.getStart() + process.getBurstTime();
        process.setFinish(finish);
}

void fcfs::simulate(Process arr[], int size){
    std::sort(arr, arr + size, [](const Process& a, const Process& b){
                return a.getArrivalTime() < b.getArrivalTime();});
    
    for(int i = 0; i < size; i++){
        if (i == 0){ // first process
            arr[i].setStart(arr[i].getArrivalTime());
            setFinish(arr[i]);
            arr[i].setWaitingTime(0);
            setTurnAround(arr[i]);
        }
        else{
            setStart(arr[i-1], arr[i]);
            setFinish(arr[i]);
            setWait(arr[i -1], arr[i]);
            setTurnAround(arr[i]);
        }
        //cout<< process.getArrivalTime()<< " + " << process.getId() << endl;
    }
}
