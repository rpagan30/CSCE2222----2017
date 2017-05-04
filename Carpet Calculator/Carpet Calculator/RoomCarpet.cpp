//
//  RoomCarpet.cpp
//  Carpet Calculator
//
//  Created by Rafael Pagan on 4/27/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include "RoomCarpet.h"
#include "RoomDimension.h"

RoomCarpet::RoomCarpet(RoomDimension room, float cost): room(room), cost(cost) {}

RoomCarpet::~RoomCarpet() {}

RoomDimension RoomCarpet::getRoom() const {
    return this->room;
}
float RoomCarpet::getCost() const {
    return this->cost;
}
void RoomCarpet::setCost() {
    FeetInches room_width = room.getWidth();
    FeetInches room_length = room.getLength();
    float w = room_width.FeetInchesToFloat();
    float l = room_length.FeetInchesToFloat();
    this->cost = w * l * this->cost;
}
void RoomCarpet::setRoom(RoomDimension R) {
    cin >> R;
}

    //Stream Operators
    ostream &operator << (ostream &output, const RoomCarpet &temp) {
        output << "Room dimensions: \n" << temp.getRoom() << endl;
        output << "Carpet Cost: \n$" << temp.getCost() << endl;
        return output;
    }
    
    istream &operator >> (istream &input, RoomCarpet &temp) {
        cout << "Please enter the room dimensions. " << endl;
        input >> temp.room;
        cout << "Please enter the cost per square foot. " << endl;
        input >> temp.cost;
        temp.setCost();
        return input;
    }
