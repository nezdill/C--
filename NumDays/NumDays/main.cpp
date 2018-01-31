//
//  main.cpp
//  NumDays
//
//  Created by Arnez Dillard on 4/25/17.
//  Copyright © 2017 com.Dillard. All rights reserved.
//

#include <iostream>


using namespace std;


//class being made called NumDays
class NumDays
{
//private and public varibles being declared
private: double hours;
   double days;
public:
NumDays() // the default class constructor
    {
        hours =0;
        days =0;
    }
   
//constructor that has to take hours as a argument
     NumDays(double h)
    {
        hours =h;
        days =h/8;
    }
    void setHours(double h)
    {
        hours =h;
        days =h/8;
    }
    
    double getHours() const
    {
        return hours;
    }
    
    void setDays (double d)
    {
        days =d;
        hours =d/8;
    }
    
    double getDays() const
    {
        return days;
    }
    
    NumDays operator + (NumDays& b)
    {
        NumDays result;
        result.setHours(this->getHours()+b.getHours());
        return result;
    }
    
    NumDays operator - (NumDays& b)
    {
        NumDays result;
        result.setHours(this->getHours());
        return result;
    }
    
    NumDays &operator ++()
    {
        this->setHours(this->getHours()+1);
        return*this;
    }
    
    const NumDays operator ++(int)
    {
        NumDays result = *this;
        this->setHours(this->getHours()+1);
        return result;
    }
    
    NumDays &operator --()
    {
        this->setHours(this->getHours()-1);
        return*this;
    }
    
    const NumDays operator --(int)
    {
        NumDays result = *this;
        this->setHours(this->getHours()-1);
        return result;
    }
};
int main() {
    // Sum values and var being declared to put in objects
    NumDays x(12), y(8), z, add, sub;
    
    //displaying the results of work hours converted to days
    
    cout << "12 hours converted to days =" << x.getDays()<<endl;
    
    cout<< "8 hours converted to days =" << y.getDays()<<endl;
    
    //two seperate objects is the sum of a number of hours
    add = x + y;
    
    sub = x - y;
    
    cout<<"The Addition operator +          : " << add.getDays()<<endl;
    
    cout<<"The Subtraction operator -        :  " <<  sub.getDays() << endl;
    
    z = add++;
    cout << "Postfix Increment operator (++):  " <<z.getDays() << endl;
    
    z = --add;
    cout << "(--) Prefix Decrement operator :  " << z.getDays() << endl;
    
    z = add--;
    cout << "Postfix Decrement operator (--): "<<z.getDays() << endl;
    
    
    system ("pause");
    return 0;
}
