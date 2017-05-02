//  main.cpp
/**
 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//NumDays Class//////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Design a class called NumDays. The class’s purpose is to store a value that represents a number of work hours and convert it to a number of days. For example, 8 hours would be converted to 1 day, 12 hours would be converted to 1.5 days, and 18 hours would be converted to 2.25 days. The class should have a constructor that accepts a number of hours, as well as member functions for storing and retrieving the hours and days. The class should also have the following overloaded operators:
+ Addition operator. When two NumDays objects are added together, the over- loaded + operator should return the sum of the two objects’ hours members.
− Subtraction operator. When one NumDays object is subtracted from another, the overloaded − operator should return the difference of the two objects’ hours members.
++ Prefix and postfix increment operators. These operators should increment the number of hours stored in the object. When incremented, the number of days should be automatically recalculated.
−− Prefix and postfix decrement operators. These operators should decrement the number of hours stored in the object. When decremented, the number of days should be automatically recalculated.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

**/

#include <iostream>
#include "Numdays.h"

using namespace std;

int main() {
    
    //Code demonstrating the Numdays Class.
    Numdays N, M, L;
    
    cout << "Setting 35 hours to the object N." << endl;
    N.setHours(35);
    cout << "Hours: " << N.getHours() << endl;
    cout << "Days: " << N.getNumdays() << endl;

    cout << "Adding objects N and M. The latter has default values hours = 8, numdays = 1." << endl;
    L = N + M;
    cout << L << endl;
    
    cout << "Subtracting objects N and M." << endl;
    L = N - M;
    cout << "Hours: " << L.getHours() << endl;
    cout << "Days: " << L.getNumdays() << endl;
  
    cout << "Prefix operators" << endl;
    cout << "--L: " << endl;
    --L;
    cout << L << endl;
    
    cout << "++L: " << endl;
    ++L;
    cout << L << endl;
    
    cout << "Postfix operators" << endl;
    cout << "L--: " << endl;
    L--;
    cout << L << endl;
    
    cout << "L++: " << endl;
    L++;
    cout << L << endl;
    
    return 0;
}
/**
 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 //Output ////////////////////////////////////////////////////////////////////////////////////////////////////////
 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 Setting 35 hours to the object N.
 Hours: 35
 Days: 4.375
 Adding objects N and M. The latter has default values hours = 8, numdays = 1.
 Hours: 43
 Days: 5.375
 Subtracting objects N and M.
 Hours: 27
 Days: 3.375
 Prefix operators
 --L:
 Number of hours: 26
 Number of days: 3.25
 
 ++L:
 Number of hours: 27
 Number of days: 3.375
 
 Postfix operators
 L--:
 Number of hours: 26
 Number of days: 3.25
 
 L++:
 Number of hours: 27
 Number of days: 3.375
 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////
**/
