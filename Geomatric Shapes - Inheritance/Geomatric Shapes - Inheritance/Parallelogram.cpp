//
//  Parallelogram.cpp
//  Geomatric Shapes - Inheritance
//
//  Created by Rafael Pagan on 5/23/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include "Parallelogram.h"

Parallelogram::Parallelogram(double P_base, double P_height, double P_area) : Rect(P_base, P_height, P_area){
    this->setArea();
}
Parallelogram::~Parallelogram() {
    
}
double Parallelogram::getArea() const {
    return this->P_area;
}
void Parallelogram::setArea() {
    this->P_area = this->getLength() * this->getWidth();
}
