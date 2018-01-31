//
//  main.cpp
//  timeFormat
//
//  Created by Arnez Dillard on 5/1/17.
//  Copyright © 2017 com.Dillard. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Time
{
protected:
    int hour;
    int min;
    int sec;
public: Time()
    {
        hour=0;min=0;sec=0;
        
}
    Time(int h, int m, int s)
    {
        hour = h; min = m; sec = s;
    }
    int gethour() const
    {
        return hour;
    }
    int getMin() const
    {
        return min;
    }
    int getSec() const
    {
        return sec;
    }
};
class MilTime: public Time
{
private:  int milHours;
    int milSeconds;
public:
    MilTime(int hours, int seconds)
    {
        milHours = hours;
        milSeconds = seconds;
    }
    void setTime(int mhours, int mseconds);
    int getHour();
    int getStandHr();
};

void MilTime::setTime(int mhours, int mseconds)
{if (mhours < 2359 &&mhours>0&&sec<=59 &&sec>=0){
    milHours = mhours;
    mseconds = mseconds;
    hour =(milHours/100);
    min = milHours % 100;
    sec = milSeconds;
}
else{ cout<<"Incorrect input of the" <<"military format\n";
    
    system ("pause");
    exit(0);

}

}

int MilTime::getStandHr()
{
    return hour % 12;
}

int main ()
{
    int hr, sec;
    
    MilTime time(0, 0);
    
    cout << "Enter Time in Military format: ";
    
    cin>> hr;
    
    sec = hr % 10;
    
    time.setTime(hr, sec);
    
    cout << "MilitaryFormat:" << time.getHour()<< "hours"<< endl;
    
    if (time.gethour()/12==1)
    {
        cout<< "Standard Format:"<<time.getStandHr()<<":";
        
        if (time.getMin()==0)
        {
            cout << time.getMin()<<"0"<<"PM"<<endl;
        }
        else cout<< time.getMin()<< "PM"
            <<endl;
    }
    else{
       cout << "Standard Format: " <<time.getStandHr()<<":";
        
        if (time.getMin()==0)
        {
            cout<<time.getMin()<<"0"<<"AM"<< endl;
        }
        else cout << time.getMin()<<"AM"<<endl;
    }
    system("pause");
    return 0;
    
    }
    
    
    
    
    
    


