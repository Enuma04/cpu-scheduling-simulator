#include "Process.h"

#include <string>
Process::Process(int aT, int bT): arrivalTime(aT), burstTime(bT){}
Process::Process(){id = arrivalTime = burstTime = waitingTime = turnAround = finishTime = 0, startTime=-1;}
Process::~Process(){}

void Process::setId(int n){
    std::string ch= "P";
    id = ch + std::to_string(n);;
    
}
std::string Process::getId() const{
    return id;
}

void Process:: setArrivalTime(int n){
    arrivalTime = n;
}
int Process:: getArrivalTime() const{
    return arrivalTime;
}

void Process:: setBurstTime(int n){
    burstTime = n;
}
int Process:: getBurstTime() const{
    return burstTime;
}

void Process:: setTurnAround(int n){
    turnAround = n;
}
int Process:: getTurnAround() const{
    return turnAround;
}

void Process::setWaitingTime(int n){
    waitingTime = n;
}
int Process::getWaitingTime() const{
    return waitingTime;
}

void Process::setStart(int n){
    startTime = n;
}
int Process::getStart() const{
    return startTime;
}

void Process::setFinish(int n){
    finishTime = n;
}
int Process::getFinish() const{
    return finishTime;
}
int Process::getRemainingTime() const{
    return remainingTime;
}
void Process::setRemainingTime(int n){
    remainingTime = n;
}
