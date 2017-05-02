//
//  PoliceOfficer.hpp
//  Parking Ticket Simulator
//
//  Created by Rafael Pagan on 4/25/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#ifndef PoliceOfficer_h
#define PoliceOfficer_h

#include <stdio.h>
#include <string>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
using namespace std;

//Exercise description:
//This class should simulate a police officer inspecting parked cars. The class’s responsibilities are:
//– To know the police officer’s name and badge number
//– To examine a ParkedCar object and a ParkingMeter object, and determine
//whether the car's time has expired
//– To issue a parking ticket (generate a ParkingTicket object) if the car’s time has
//expired

class PoliceOfficer {
    
private:
    string officer_name = "";
    string badge_number = "";
    
public:
    //Constructor & Destructor
    PoliceOfficer();
    ~PoliceOfficer();
    
    //Accessors
    string getOfficerName() const;
    string getBadgeNumber() const;
    
    //Mutators
    void setOfficerName(float N);
    void setBadgeNumber(float BN);
    
};
#endif /* PoliceOfficer_hpp */
