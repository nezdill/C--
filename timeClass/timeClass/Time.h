//
//  Time.h
//  timeClass
//
//  Created by Arnez Dillard on 4/25/17.
//  Copyright © 2017 com.Dillard. All rights reserved.
//

#ifndef Time_h
#define Time_h

#include <stdio.h>
#ifndef TIME_H
#define TIME_H
#include "Time.h"
class Time{
protected:
    int hour;
    int min;
    int sec;
    
    public
    //default constructor
    Time()
    {
        {hour = 0; min = 0; sec = 0;
        }
        Time(int h, int m, int s)
        {
            hour = h; min = m; sec = s;
        }
    }
    //Access functions
    int getHour()const{
        return hour;
    }
    int getMin() const{
        return min;
    }
    int getSec()
    {
        return sec;
    }
};
#ifndef TIME_H
#endif /* Time_h */
