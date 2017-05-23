//
//  Trapezoid.cpp
//  Geomatric Shapes - Inheritance
//
//  Created by Rafael Pagan on 5/23/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include "Trapezoid.h"
#include "Rect.h"

Trapezoid::Trapezoid(double TZ_height, double TZ_base_1, double TZ_base_2, double TZ_area) : Rect (TZ_height, TZ_base_1, TZ_area) {
    this->setBase2(TZ_base_2);
    this->setArea();
}
Trapezoid::~Trapezoid() {}
double Trapezoid::getBase2() const {
    return this->TZ_base_2;
}
double Trapezoid::getArea() const {
    return this->TZ_area;
}

void Trapezoid::setBase2(double b2) {
    this->TZ_base_2 = b2;
}
void Trapezoid::setArea() {
    this->TZ_area = getWidth() * (getLength() + TZ_base_2) / 2;
}
