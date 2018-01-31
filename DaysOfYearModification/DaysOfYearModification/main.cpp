//
//  main.cpp
//  DaysOfYearModification
//
//  Created by Arnez Dillard on 4/18/17.
//  Copyright © 2017 com.Dillard. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;
class DayOfYear
{
private: int day;
    
public: static int daysAtEndOfMonth[];
    static string monthName[];
    void print();
    void printDayNumber(){
        cout<<day;
    }
    
    void setDay(int day)
    {
        this-> day = day;
    }
    DayOfYear(string nameOfMonth, int dayOfMonth);
    DayOfYear(){};
    DayOfYear operator++(int);
    DayOfYear operator++();
    DayOfYear operator--(int);
    DayOfYear operator--();
};
int DayOfYear::daysAtEndOfMonth[]={31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};

string DayOfYear::monthName[]={"January","February","March","April","May","June", "July","August","September","October","November","Decemeber"};
DayOfYear::DayOfYear(string nameOfMonth, int dayOfMonth)
{
    bool error = false;
    
    for (int m = 0; m< 12; m++)
    {
        if(m == 0)
        {day = dayOfMonth;
            error = dayOfMonth < 0 || dayOfMonth >= 32;
            if(error)break;
            
    }
        else
        {
            day = dayOfMonth + daysAtEndOfMonth[m - 1];
            error = dayOfMonth<0 || dayOfMonth>daysAtEndOfMonth[m]-
            daysAtEndOfMonth[m-1];
            if(error)break;
            
}
        return;
    }//try another month
}
//not a legitimate month

cout<<"Incorrect name of day of month";
exit(1);
}
int main() {
    
    
    
    cout << "Hello, World!\n";
    return 0;
}
