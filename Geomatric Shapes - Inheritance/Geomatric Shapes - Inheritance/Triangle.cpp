//
//  Triangle.cpp
//  Geomatric Shapes - Inheritance
//
//  Created by Rafael Pagan on 5/23/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include "Triangle.h"

Triangle::Triangle(double T_base, double T_height, double T_area) : Rect(T_base, T_height, T_area) {
    this->setArea();
}
Triangle::~Triangle() {}
double Triangle::getArea() const {
    return this->T_area;
}
void Triangle::setArea() {
    this->T_area = (this->getWidth() * this->getLength())/2;
}
