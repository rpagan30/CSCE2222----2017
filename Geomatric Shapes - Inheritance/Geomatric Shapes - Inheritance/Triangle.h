//
//  Triangle.hpp
//  Geomatric Shapes - Inheritance
//
//  Created by Rafael Pagan on 5/23/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#ifndef Triangle_h
#define Triangle_h

#include <stdio.h>
#include "Rect.h"

class Triangle : public Rect {
private:
    double T_area;
public:
    Triangle(double T_length, double T_width, double area);
    ~Triangle();
    double getArea() const;
    void setArea();
};

#endif /* Triangle_h */
