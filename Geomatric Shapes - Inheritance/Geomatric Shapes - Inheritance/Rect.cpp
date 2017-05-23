

//
//  Rect.cpp
//  Geomatric Shapes - Inheritance
//
//  Created by Rafael Pagan on 5/22/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include "Rect.h"

Rect::Rect() {
    this->length = 1.0;
    this->width = 1.0;
    this->area = 1.0;
}
Rect::Rect(double l, double w, double a) {
    length = l;
    width = w;
    area = a;
}

Rect::~Rect() {}

double Rect::getLength() const {
    return this->length;
}
double Rect::getWidth() const {
    return this->width;
}

double Rect::getArea() const {
    return this->area;
}

void Rect::setLength(double l) {
    this->length = l;
}
void Rect::setWidth(double w) {
    this->width = w;
}

void Rect::setArea() {
    this->width = getLength() * getWidth();
}
