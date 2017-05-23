//
//  RightCircularCylinder.cpp
//  Geomatric Shapes - Inheritance
//
//  Created by Rafael Pagan on 5/23/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include "RightCircularCylinder.h"
#include "RightCircularCone.h"
#include <cmath>

RightCircularCylinder::RightCircularCylinder(double RCCY_radius, double RCCY_height, double RCCY_area, double RCCY_volume) : RightCircularCone(RCCY_radius, RCCY_height, RCCY_area, RCCY_volume) {
    this->setArea();
    this->RightCircularCone::setVolume();
}
RightCircularCylinder::~RightCircularCylinder() {}

double RightCircularCylinder::getArea() const {
    return this->RCCY_area;
}
double RightCircularCylinder::getVolume() const {
    return this->RCCY_volume;
}

void RightCircularCylinder::setArea() {
    RCCY_area = 2 * M_PI * getLength() * getWidth();
}
void RightCircularCylinder::setVolume() {
    RCCY_volume = M_PI * pow(getLength(),2) * getWidth();
}
