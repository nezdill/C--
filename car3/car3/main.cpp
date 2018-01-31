//
//  main.cpp
//  car3
//
//  Created by Arnez Dillard on 4/19/17.
//  Copyright © 2017 com.Dillard. All rights reserved.
//
#include <iostream>
#include <string>

using namespace std;
class Car
{
private:
    int year;
    string make;
    int speed;
    
public:
    Car(int, string, int);
    int getSpeed();
    int getModel();
    void accelerate();
    void brake();
    
    
};

int Car::getSpeed()
{
    return speed;
}

Car::Car(int year, string make, int speed = 0 )
{
}

int Car::getModel()
{
    return year;
}

void Car::accelerate()
{
    speed +=5;
}

void Car::brake()
{
    if( speed > 5 )
        speed -=5;
    else speed = 0 ;
}


int main ()
{
    // varibles being declared
    int year;
    string make;
    //Reading details and initializing the var
    cout << "Please enter the model year of the car.\n";
    cin >> year ;
    cout << "Please enter the make of the car \n";
    cin >> make ;
    //simple for statment for acceleration and speed being read 
    Car myCar(year,make);
    int i = 0;
    for (; i<5; ++i)
    {
        myCar.accelerate();
        cout << "Accelerating.\n" << "The current speed of the car is: " << myCar.getSpeed()<<endl;
    }
    
    {
        int j = 0;
        for (; j<5; ++j)
        {
            myCar.brake();
            cout << "Decelerating.\n" << "The current speed of the car is: " << myCar.getSpeed()<<endl;
        }
      
        return (0);
    }
}
