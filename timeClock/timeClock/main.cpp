//
//  main.cpp
//  timeClock
//
//  Created by Arnez Dillard on 5/1/17.
//  Copyright © 2017 com.Dillard. All rights reserved.
//

#include <iostream>
#include <iomanip>


using namespace std;

class Time
{
protected:
    int hour;
    int min;
    int sec;
public:
    Time()
    {
        hour = 0;
        min = 0;
        sec = 0;
    }
    Time(int h, int m, int s)
    {
        hour = h;
        min = m;
        sec = s;
        }
    int gethour() const
    {
        return hour;
    }
    int getMin() const
    {
        return min;
    }
    int getSec()const
    {
        return sec;
    }
};
    class MilTime:public Time
    {
    private:
        int milHours;
        int milSeconds;
    public: MilTime(){
        milHours = 0;
        milSeconds = 0;
    }
        void setTime(int mhours, int mseconds);
        int getHour();
        int getStandHr();
};
    void MilTime:: setTime(int intmhors, int mseconds)
    {
        milHours = hour;
        mseconds = mseconds;
        hour = (milHours/100);
        min = milHours%100;
        sec = milSeconds;
    }
    
    int MilTime:: getHour()
    {
        return milHours;
        
    }
    
    int MilTime:: getStandHr() {
       return hour % 12;
}
    
class TimeClock: public MilTime{
private:
    int startTime;
    int endTime;
public:
    TimeClock()
    {
        startTime = 0;
        endTime= 0;
        
    }
    void setStartTime();
    void setendTime();
    int elapsedTime();
};
    void TimeClock::setStartTime()
    {
        int t1;
        
        cout<< "Enter the starting time: ";
        cin >>t1;
        if (t1 <=2359 && t1>=0)
        {
            startTime = t1;
            
        }
        else{
            cout<<"Error: Hours not greater than 2359 or less than 0";
        }
    }
    void TimeClock::setendTime()
    {
        int t2;
        cout<<"Enter the ending time: ";
        cin >> t2;
        if(t2 <= 2359 && t2>= 0)
        {
            endTime= t2;
        }
        else {
            cout <<"Error: Hours not greater than 2359 or less than 0";
            exit(1);
            
        }
    }
    int TimeClock::elapsedTime()
    {
        
        
        return endTime - startTime;
    }
    
    int main ()
    {
        TimeClock time1;
        time1.setStartTime();
        time1.setendTime();
        int elapsed = time1.elapsedTime();
        time1.setTime(elapsed, elapsed%10);
        cout << "The elapsed time is " << "hours"<< endl;
        system ("pause");
        return 0;
    }
    
    

