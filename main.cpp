#include <iostream>
#include <iostream>
#include <cstdlib>  
#include <ctime>  
#include "Process.h"
#include <string>
#include <algorithm>
using namespace std;

void setTurnAround(Process& process){
        int finish = process.getStart() + process.getBurstTime();
        process.setTurnAround(finish - process.getArrivalTime());
}
    
void setWait(const Process& processPrev, Process& process){
        int finish = processPrev.getFinish();
        int diff = finish - process.getArrivalTime();
        int wait =  diff > -1 ? diff : 0;
        process.setWaitingTime(wait);
}

void setStart(const Process& processPrev, Process& process){
        int start = max(processPrev.getFinish(), process.getArrivalTime()) ;
        process.setStart(start);
}

void setFinish(Process& process){
        int finish = process.getStart() + process.getBurstTime();
        process.setFinish(finish);
}

int main() {
    
    
    srand(time(0));

    //  int arrivalTime = (rand() % 10) + 1;
    //  int burstTime = (rand() % 10);
    int processes = (rand() % 5) + 5 ;
    Process arr[processes];
    int size = 0;
    int id = 0;
    
    for(int i = 0; i < processes; i++){
        int arrivalTime = (rand() % 10) + 1;
        int burstTime = (rand() % 10) + 1;
        id ++;
        cout << "process has been created with arrival time " << arrivalTime;
        cout << " and burst time " << burstTime << endl;
        
        Process process{arrivalTime, burstTime};
        process.setId(id);

        arr[size] = process;
        size++;
    }
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
    //cout << arrivalTime << " " <<"test";
    cout << endl;
    cout << "Process | Arrival | Burst | Start | Waiting | Turnaround | Finish" << endl;
    
    for(auto process: arr){
        cout << process.getId()<<"     " << " | " <<process.getArrivalTime()<< "      " << " | ";
        cout << process.getBurstTime()<<"    " << " | " <<process.getStart()<< "    " << " | ";
        cout << process.getWaitingTime()<<"     " << " | " ;
        cout <<process.getTurnAround()<< "        " << " | " << process.getFinish() << endl;
    }
    return 0;

}
