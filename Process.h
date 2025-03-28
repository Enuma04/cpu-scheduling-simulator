#ifndef _PROCESS_
#define _PROCESS_

#include <string>

class Process
{
    private:
        std::string id;
        int arrivalTime;
        int burstTime;
        int waitingTime;
        int turnAround;
        int startTime;
        int finishTime;
        
    public:
        Process(int arrivalTime, int burstTime);
        Process();
        ~Process();
        
        void setId(int n);
        std::string getId() const;
        void setArrivalTime(int n);
        int getArrivalTime() const;
        void setBurstTime(int n);
        int getBurstTime() const;
        void setWaitingTime(int n);
        int getWaitingTime() const;
        void setTurnAround(int n);
        int getTurnAround() const;
        void setStart(int n);
        int getStart() const;
        void setFinish(int n);
        int getFinish() const;
};

#endif // _PROCESS_
