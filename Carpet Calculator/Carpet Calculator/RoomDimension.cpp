//
//  RoomDimension.cpp
//  Carpet Calculator
//
//  Created by Rafael Pagan on 4/27/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include "FeetInches.h"
#include "RoomDimension.h"


RoomDimension::RoomDimension(FeetInches width, FeetInches length, FeetInches area): width(width), length(length), area(area) {}

RoomDimension::RoomDimension() {
    
    width = 1;
    length = 1;
    area = 1;
}

RoomDimension::~RoomDimension() {}

FeetInches RoomDimension::getWidth() const {
    return this->width;
}
FeetInches RoomDimension::getLength() const {
    return this->length;
}
FeetInches RoomDimension::getArea() const {
    return this->area;
}
void RoomDimension::setWidth(int w) {
    this->width = w;
}
void RoomDimension::setLength(int l) {
    length = l;
}
void RoomDimension::setArea() {
    area = width * length;
}

//**********************************************
// Overloaded binary + and - operators. *
//**********************************************


RoomDimension RoomDimension::operator + (const RoomDimension &temp) {
    FeetInches temp_width = width + temp.width;
    FeetInches temp_length = length + temp.length;
    FeetInches temp_area = temp_width * temp_length;
    return RoomDimension (temp_width, temp_length, temp_area);
}

RoomDimension RoomDimension::operator - (const RoomDimension &temp) {
    FeetInches temp_width = width - temp.width;
    FeetInches temp_length = length - temp.length;
    FeetInches temp_area = temp_width * temp_length;
    return RoomDimension (temp_width, temp_length, temp_area);
}

//**********************************************
// Overloaded >, < and == operators. *
//**********************************************

bool RoomDimension::operator > ( RoomDimension &temp) {
    this->setArea();
    temp.setArea();
    bool flag = false;
    if( this-> area > temp.area) {
        flag = true;
    }
    return flag;
}

bool RoomDimension::operator < ( RoomDimension &temp) {
    this->setArea();
    temp.setArea();
    bool flag = false;
    if( this-> area < temp.area) {
        flag = true;
    }
    return flag;
}

RoomDimension & RoomDimension::operator = (const RoomDimension &temp) {
    this->width = temp.getWidth();
    this->length = temp.getLength();
    return *this;
}

bool RoomDimension::operator == ( RoomDimension &temp) {
    this->setArea();
    temp.setArea();
    bool flag = false;
    if( this-> area == temp.area) {
        flag = true;
    }
    return flag;
}

//Stream Operators
ostream &operator << (ostream &output, const RoomDimension &temp) {
    output << "Width: " << temp.getWidth() << endl;
    output << "Length: " << temp.getLength() << endl;
    return output;
}

istream &operator >> (istream &input, RoomDimension &temp) {
    cout << "Width: " << endl;
    input >> temp.width;
    cout << "Length: " << endl;
    input >> temp.length;
    temp.setArea();
    return input;
}
