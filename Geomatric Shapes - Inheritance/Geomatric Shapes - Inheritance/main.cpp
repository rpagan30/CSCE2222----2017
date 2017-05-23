//
//  main.cpp
//  Geomatric Shapes - Inheritance
//
//  Created by Rafael Pagan on 5/22/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#include <iostream>
#include "Rect.h"
#include "Square.h"
#include "Triangle.h"
#include "Parallelogram.h"
#include "Trapezoid.h"
#include "RightCircularCone.h"
#include "RightCircularCylinder.h"
using namespace std;

int main() {
    
    Triangle T(5,5,1);
    T.Triangle::setArea();
    cout << "Triangle:"
    << "\nbase: " << T.getLength()
    <<"\nheight: " << T.getWidth()
    <<"\narea: " << T.getArea() << endl << endl;
    
    Trapezoid tr(5,5,2,1);
    tr.Trapezoid::setArea();
    cout << "Trapezoid:"
    << "\nbase: " << tr.getLength()
    << "\nbase 1: " << tr.getWidth()
    << "\nbase 2: " << tr.getBase2()
    << "\narea: " << tr.getArea() << endl << endl;
    
    RightCircularCylinder RCCY(3,4,3,1);
    RCCY.RightCircularCylinder::setArea();
    RCCY.RightCircularCylinder::setVolume();
    cout << "Right Circular Cylinder:"
    << "\nradius: " << tr.getLength()
    << "\nheight: " << tr.getWidth()
    << "\narea: " << RCCY.RightCircularCylinder::getArea()
    << "\nVolume: " << RCCY.RightCircularCylinder::getVolume() << endl << endl;
    
    cout << endl;
    
    return 0;
}
