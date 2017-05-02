//
//  RoomCarpet.h
//  Carpet Calculator
//
//  Created by Rafael Pagan on 4/27/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
// Next, you should create a RoomCarpet class that has a RoomDimension object as an attribute. It should also have an attribute for the cost of the carpet per square foot. The RoomCarpet class should have a member function that returns the total cost of the carpet.

#ifndef ROOMCARPET_H
#define ROOMCARPET_H

#include "RoomDimension.h"

class RoomCarpet {
    
private:
    RoomDimension room;
    float cost;
public:
    //RoomCarpet();
    RoomCarpet(RoomDimension room, float cost = 1);
    ~RoomCarpet();
    RoomDimension getRoom() const;
    float getCost() const;
    void setCost();
    void setRoom(RoomDimension R);
    
    // Friends
    friend ostream &operator << (ostream &, const RoomCarpet &temp);
    friend istream &operator >> (std::istream &, RoomCarpet &);
};

#endif /* RoomCarpet_h */
