#include <iostream>
#include <iostream>
#include <cstdlib>  
#include <ctime>  
#include "Process.h"
#include "fcfs.h"
#include "SJF.h"
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    
    
    srand(time(0));

    /******************************PROCESS CREATION IN ARRAY*********************************/
//    int processes = (rand() % 5) + 5 ;
//    Process arr[processes];
//    int size = 0;
//    int id = 0;
//    
//    for(int i = 0; i < processes; i++){
//        int arrivalTime = (rand() % 10) + 1;
//        int burstTime = (rand() % 10) + 1;
//        id ++;
//        cout << "process has been created with arrival time " << arrivalTime;
//        cout << " and burst time " << burstTime << endl;
//        
//        Process process{arrivalTime, burstTime};
//        process.setId(id);
//
//        arr[size] = process;
//        size++;
//    }
    /******************************PROCESS CREATION IN VECTOR*********************************/
    int processCount = (rand() % 5) + 5;

    std::vector<Process> processVec;
    int idVec = 0;

    for (int i = 0; i < processCount; i++) {
        int arrivalTime = (rand() % 10) + 1;
        int burstTime = (rand() % 10) + 1;
        idVec++;

        cout << "process has been created with arrival time " << arrivalTime;
        cout << " and burst time " << burstTime << endl;

        Process process{arrivalTime, burstTime};
        process.setId(idVec);
        
        processVec.push_back(process); // Add to vector
    }
    /***********************************SIMULATION*********************************/
    
//    fcfs fcfsAlgo;
//    fcfsAlgo.simulate(arr, size);

    SJF sjfAlgo;
    std::vector<Process> sjfList = sjfAlgo.simulate(processVec);
    
    /***********************************DISPLAY*********************************/
    cout << endl;
    cout << "Process | Arrival | Burst | Start | Waiting | Turnaround | Finish" << endl;
    
    for(auto process: sjfList){
        cout << process.getId()<<"     " << " | " <<process.getArrivalTime()<< "      " << " | ";
        cout << process.getBurstTime()<<"    " << " | " <<process.getStart()<< "    " << " | ";
        cout << process.getWaitingTime()<<"     " << " | " ;
        cout <<process.getTurnAround()<< "        " << " | " << process.getFinish() << endl;
    }
    /***********************************DISPLAY*********************************/
    return 0;

}
