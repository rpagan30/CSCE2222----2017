//
//  Rect.hpp
//  Geomatric Shapes - Inheritance
//
//  Created by Rafael Pagan on 5/22/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#ifndef Rect_h
#define Rect_h

#include <stdio.h>

class Rect {
private:
    double length;
    double width;
    double area;
public:
    Rect();
    Rect(double l, double w, double a);
    ~Rect();
    double getLength() const;
    double getWidth() const;
    double getArea() const;
    
    void setLength(double l);
    void setWidth(double w);
    void setArea();
};

#endif /* Rect_h */
