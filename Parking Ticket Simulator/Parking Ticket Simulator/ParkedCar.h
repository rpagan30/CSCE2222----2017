//
//  Parked Car.hpp
//  Parking Ticket Simulator
//
//  Created by Rafael Pagan on 4/25/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#ifndef Parked_Car_h
#define Parked_Car_h

#include <stdio.h>
#include <string>
using namespace std;

//This class should simulate a parked car. The class’s responsibilities are:
//To know the car's make, model, color license number, and the number of minutes
//that the car has been parked.

class ParkedCar {
private:
    string make = "";
    string model = "";
    string license_number = "";
    float minutes_parked;
    
public:
    //Constructor & Destructor
    ParkedCar();
    ~ParkedCar();
    
    //Accessors
    string getMake() const;
    string getModel() const;
    string getLicenseNo() const;
    float getTime() const;
    //Mutators
    void setMake(string M);
    void setModel(string Md);
    void setLicenseNo(string L);
    void setTime(float T);
    
};

#endif /* Parked_Car_hpp */
