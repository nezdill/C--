//
//  main.cpp
//  TimeOff
//
//  Created by Arnez Dillard on 4/25/17.
//  Copyright © 2017 com.Dillard. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
#define WORKING_HOURS_1_DAY 8

class NumDays {
private:
    double hours;
    double days;
public:
    NumDays() {
        hours = days = 0.0;
    }
    NumDays(double hr) {
        hours = hr;
        days = hr / WORKING_HOURS_1_DAY;
    }
    
    void setHours(double hr) {
        hours = hr;
        days = hr / WORKING_HOURS_1_DAY;
    }
    double getHours() {
        return hours;
    }
    void setDays(double d) {
        days = d;
        hours = d * WORKING_HOURS_1_DAY;
    }
    double getDays() {
        return days;
    }
    
    NumDays operator+(NumDays & numDays) {
        double totalHours = getHours() + numDays.getHours();
        return NumDays(totalHours);
    }
    NumDays operator-(NumDays & numDays) {
        double totalHours = getHours() - numDays.getHours();
        return NumDays(totalHours);
    }
    NumDays operator*(NumDays & numDays) {
        double totalHours = getHours() * numDays.getHours();
        return NumDays(totalHours);
    }
    NumDays operator/(NumDays & numDays) {
        if(numDays.getHours() == 0) {
            cerr << "Cannot divide by zero. Returning numberator NumDays." << endl;
            return NumDays(getHours());
        }
        double totalHours = getHours() / numDays.getHours();
        return NumDays(totalHours);
    }
    
    NumDays & operator++() {
        this->setHours(this->getHours() + 1);
        return *this;
    }
    const NumDays operator++(int) {
        NumDays op = *this;
        this->setHours(this->getHours() + 1);
        return op;
    }
    
    NumDays & operator--() {
        this->setHours(this->getHours() - 1);
        return *this;
    }
    const NumDays operator--(int) {
        NumDays op = *this;
        this->setHours(this->getHours() - 1);
        return op;
    }
};

class TimeOff {
private:
    constexpr const static double maxVacationHours_default = 240;
    string employee_name;
    int employee_id;
    NumDays maxSickDays;
    NumDays sickTaken;
    NumDays maxVacation;
    NumDays vacTaken;
    NumDays maxUnpaid;
    NumDays unpaidTaken;
public:
    TimeOff() {
        employee_name = ""; employee_id = 0;
        maxVacation.setHours(maxVacationHours_default);
    }
    TimeOff(string arg_employee_name, int arg_employee_id) {
        employee_name = arg_employee_name;
        employee_id = arg_employee_id;
        maxVacation.setHours(maxVacationHours_default);
    }
    TimeOff(string arg_employee_name, int arg_employee_id, double arg_hours_maxSickDays, double arg_hours_maxVacation, double arg_hours_maxUnpaid) {
        maxSickDays.setHours(arg_hours_maxSickDays);
        maxVacation.setHours(arg_hours_maxVacation);
        maxUnpaid.setHours(arg_hours_maxUnpaid);
        employee_name = arg_employee_name;
        employee_id = arg_employee_id;
    }
    //setters
    void setEmployeeName(string name) {
        employee_name = name;
    }
    void setEmployeeId(int id) {
        employee_id = id;
    }
    
    void setHours_maxSickDays(double hr) {
        maxSickDays.setHours(hr);
    }
    void setDays_maxSickDays(double d) {
        maxSickDays.setDays(d);
    }
    void setHours_sickTaken(double hr) {
        if(hr > maxSickDays.getHours()) {
            cerr << "Error : Cannot set sickTaken hours to more the maxSickDays hours. Making no changes." << endl;
            return;
        }
        sickTaken.setHours(hr);
    }
    void setDays_sickTaken(double d) {
        if(d > maxSickDays.getDays()) {
            cerr << "Error : Cannot set sickTaken days to more the maxSickDays days. Making no changes." << endl;
            return;
        }
        sickTaken.setDays(d);
    }
    void setHours_maxVacation(double hr) {
        maxVacation.setHours(hr);
    }
    void setDays_maxVacation(double d) {
        maxVacation.setDays(d);
    }
    void setHours_vacTaken(double hr) {
        if(hr > maxVacation.getHours()) {
            cerr << "Error : Cannot set vacTaken hours to more the maxVacation hours. Making no changes." << endl;
            return;
        }
        vacTaken.setHours(hr);
    }
    void setDays_vacTaken(double d) {
        if(d > maxVacation.getDays()) {
            cerr << "Error : Cannot set vacTaken days to more the maxVacation days. Making no changes." << endl;
            return;
        }
        vacTaken.setDays(d);
    }
    void setHours_maxUnpaid(double hr) {
        maxUnpaid.setHours(hr);
    }
    void setDays_maxUnpaid(double d) {
        maxUnpaid.setDays(d);
    }
    void setHours_unpaidTaken(double hr) {
        if(hr > maxUnpaid.getHours()) {
            cerr << "Error : Cannot set unpaidTaken hours to more the maxUnpaid hours. Making no changes." << endl;
            return;
        }
        unpaidTaken.setHours(hr);
    }
    void setDays_unpaidTaken(double d) {
        if(d > maxUnpaid.getDays()) {
            cerr << "Error : Cannot set unpaidTaken days to more the maxUnpaid days. Making no changes." << endl;
            return;
        }
        unpaidTaken.setDays(d);
    }
    
    
    //getters
    string getEmployeeName() {
        return employee_name;
    }
    int getEmployeeId() {
        return employee_id;
    }
    
    double getHours_maxSickDays() {
        return maxSickDays.getHours();
    }
    double getDays_maxSickDays() {
        return maxSickDays.getDays();
    }
    double getHours_sickTaken() {
        return sickTaken.getHours();
    }
    double getDays_sickTaken() {
        return sickTaken.getDays();
    }
    double getHours_maxVacation() {
        return maxVacation.getHours();
    }
    double getDays_maxVacation() {
        return maxVacation.getDays();
    }
    double getHours_vacTaken() {
        return vacTaken.getHours();
    }
    double getDays_vacTaken() {
        return vacTaken.getDays();
    }
    double getHours_maxUnpaid() {
        return maxUnpaid.getHours();
    }
    double getDays_maxUnpaid() {
        return maxUnpaid.getDays();
    }
    double getHours_unpaidTaken() {
        return unpaidTaken.getHours();
    }
    double getDays_unpaidTaken() {
        return unpaidTaken.getDays();
    }
    
};

int main() {
    TimeOff timeOff("Jones" , 1, 300, 250, 180);
    
    cout << "setDays_unpaidTaken(9) called..." << endl;
    timeOff.setDays_unpaidTaken(9);
    
    cout << "setHours_vacTaken(230) called..." << endl;
    timeOff.setHours_vacTaken(230);
    
    cout << "setDays_sickTaken(6) called..." << endl;
    timeOff.setDays_sickTaken(6);
    
    cout << "setHours_vacTaken(290) called..." << endl;
    timeOff.setHours_vacTaken(290);
    
    return 0;
}
