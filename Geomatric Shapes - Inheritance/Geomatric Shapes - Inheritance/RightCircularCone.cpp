//
//  RightCircularCone.cpp
//  Geomatric Shapes - Inheritance
//
//  Created by Rafael Pagan on 5/23/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include "RightCircularCone.h"
#include "Rect.h"
#include <cmath>

RightCircularCone::RightCircularCone(double RCC_radius, double RCC_height, double RCC_area, double RCC_volume) : Rect(RCC_radius, RCC_height, RCC_area) {
    this->setAreaa();
    this->setVolume();
}
RightCircularCone::~RightCircularCone() {}

double RightCircularCone::getArea() {
    return this->RCC_area;
}
double RightCircularCone::getVolume() {
    return this->RCC_volume;
}
void RightCircularCone::setAreaa() {
    this->RCC_area = M_PI * getLength() * sqrt(pow(getLength(),2)-pow(getWidth(),2));
}
void RightCircularCone::setVolume() {
    this->RCC_volume = ( M_PI * pow(getLength(),2) * getWidth() )/3;
}
