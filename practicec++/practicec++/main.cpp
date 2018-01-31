//
//  main.cpp
//  practicec++
//
//  Created by Arnez Dillard on 4/25/17.
//  Copyright © 2017 com.Dillard. All rights reserved.
//

#include <iostream>

using namespace std;


int main() {
   
    
class BaseClass()
    {
    cout << "This is the BaseClass constructor. \n";
    };
    
    ~BaseClass()
    {
        cout << "This is the BaseClass destructor. /\n";
    };
    class DerivedClass()
    {
        cout << "This is the DerivedClass destructor.\n";
    }
    ~DerivedClass()
    {
        cout <<" This is the DerivedClass destructor.\n";
    }
};

    cout << "Hello, World!\n";
    return 0;
}
