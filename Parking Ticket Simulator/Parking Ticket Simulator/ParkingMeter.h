//
//  ParkingMeter.hpp
//  Parking Ticket Simulator
//
//  Created by Rafael Pagan on 4/25/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#ifndef ParkingMeter_h
#define ParkingMeter_h

#include <stdio.h>
//The ParkingMeter Class: This class should simulate a parking meter. The class’s
//only responsibility is: To know the number of minutes of parking time that has
//been purchased.

class ParkingMeter {
private:
    float minutes_purchased;
    
public:
    ParkingMeter(float minutes_purchased =0);
    ~ParkingMeter();
    
    //Accesor
    float getTime() const;
    
    //Mutator
    void setTime(float T);
    
};


#endif /* ParkingMeter_hpp */
