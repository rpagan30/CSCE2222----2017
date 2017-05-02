//
//  RoomCarpet.cpp
//  Carpet Calculator
//
//  Created by Rafael Pagan on 4/27/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include "RoomCarpet.h"
#include "RoomDimension.h"


RoomCarpet::RoomCarpet(RoomDimension room_area, float cost): room_area(room_area), cost(cost) {}

RoomCarpet::~RoomCarpet() {}

RoomDimension RoomCarpet::getRoomArea() const {
    return this->room_area;
}
float RoomCarpet::getCost() const {
    return this->cost;
}
void RoomCarpet::setRoomDimension(RoomDimension R) {
    cout << "What are the dimensions of the room? " << endl;
    cin >> R;
}
