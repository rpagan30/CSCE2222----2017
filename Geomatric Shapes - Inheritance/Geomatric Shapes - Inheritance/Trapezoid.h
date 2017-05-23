//
//  Trapezoid.hpp
//  Geomatric Shapes - Inheritance
//
//  Created by Rafael Pagan on 5/23/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#ifndef Trapezoid_h
#define Trapezoid_h

#include <stdio.h>
#include "Rect.h"

class Trapezoid : public Rect {
private:
    double TZ_area;
    double TZ_base_2;
public:
    Trapezoid(double TZ_height, double TZ_base_1, double TZ_base_2, double TZ_area);
    ~Trapezoid();
    double getBase2() const;
    double getArea() const;
    
    void setBase2(double b2);
    void setArea();
};

#endif /* Trapezoid_h */
