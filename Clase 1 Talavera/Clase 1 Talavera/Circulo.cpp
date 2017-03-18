//
//  Circulo.cpp
//  Clase 1 Talavera
//
//  Created by Rafael Pagan on 3/7/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//
#include <iostream>
#include <math.h>
#include "Circulo.h"

using namespace std;

Circ::Circ(double centerX, double centerY, double area): centerX(centerX), centerY(centerY), area(area)
{}

Circ::~Circ() {
    
    cout << "Circle object destroyed." << endl;
}

double Circ::getCenterX() const {
    
    return centerX;
    
}

double Circ::getCenterY() const {
    
    return centerY;
    
}

double Circ::getRadius() const {
    
    return radius;
    
}

double Circ::getArea() const {
    
    return area;
}

void Circ::setCenterX(double a) {
    
    centerX = a;
}

void Circ::setCenterY(double b) {
    
    centerY = b;
}

void Circ::setRadius(double c) {
    
    radius = c;
}

void Circ::setArea() {
    
    area = getRadius() * getRadius() * M_PI;
}

void Circ::setCirc(double d, double e, double f) {
    
    setCenterX(d);
    setCenterY(e);
    setRadius(f);
    setArea();
}


void Circ::DisplayCirc () const {
    
    cout << "\n--Circle Display--" << endl ;
    cout << "Center X: " << getCenterX() << endl ;
    cout << "Center Y: " << getCenterY() << endl;
    cout << "Radius: " << getRadius() << endl;
    cout << "Area: " << getArea() << endl ;
    
}

//copy constructor
Circ::Circ( const Circ &aCirc) {
    setCenterX( aCirc.getCenterX() );
    setCenterY( aCirc.getCenterY() );
    setRadius( aCirc.getRadius() );
    setArea();
    cout << "Copied circle using the copy constructor." << endl;
}
