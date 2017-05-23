//
//  Parallelogram.hpp
//  Geomatric Shapes - Inheritance
//
//  Created by Rafael Pagan on 5/23/17.
//  Copyright © 2017 Rafael Pagan. All rights reserved.
//

#ifndef Parallelogram_h
#define Parallelogram_h

#include <stdio.h>
#include "Rect.h"

class Parallelogram : public Rect {
private:
    double P_area;
    
public:
    Parallelogram(double P_base, double P_height, double P_area);
    ~Parallelogram();
    double getArea() const;
    void setArea();
};

#endif /* Parallelogram_h */
