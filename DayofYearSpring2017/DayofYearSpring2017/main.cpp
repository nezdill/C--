//
//  main.cpp
//  DayofYearSpring2017
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
    
public:
    static int daysAtEndOfMonth[];
    
    static string monthName[];
    
    void print();
    void setDay(int day)
    {
        this->day=day;
    }};

int DayOfYear::daysAtEndOfMonth[]={31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};

string DayOfYear::monthName[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "Novemebr", "December"};

// print function to convert and print day of the year

void DayOfYear::print()
{
    int month = 0;
    while(daysAtEndOfMonth[month]< day)
        month = (month + 1)% 12;
    // DaysAtEndOfMonth >=day
    if (month == 0)
        cout << "\n January" << day << endl << endl;
    
    else
    {
        cout << endl<< monthName[month]<<""<<day - daysAtEndOfMonth[month - 1] << endl << endl;
        
    }
    }

int main() {
 
    
    DayOfYear dayOfYearObj;
    
    int day;
    
    //display the purpose of the program
    
    cout << "This program converts a number into a string representing\n"<< "the month and day"<< endl << endl;
    
    //get the
    
    cout << "Enter a whole number between 1 and 365: ";  <<endl;
    cin >> day;
    dayOfYearObj.setDay(day);
    
    dayOfYearObj.print();
    
    return 0;
}











